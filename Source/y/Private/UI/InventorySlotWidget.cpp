#include "UI/InventorySlotWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/SizeBox.h"
#include "Components/Border.h"

void UInventorySlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
}

TSharedRef<SWidget> UInventorySlotWidget::RebuildWidget()
{
	// Build: SizeBox -> Border -> Overlay(Icon, CountText)
	USizeBox* Size = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("Size"));
	Size->SetWidthOverride(64.f);
	Size->SetHeightOverride(64.f);
	WidgetTree->RootWidget = Size;

	UBorder* Border = WidgetTree->ConstructWidget<UBorder>(UBorder::StaticClass(), TEXT("Border"));
	Border->SetPadding(FMargin(2.f));
	Border->SetBrushColor(FLinearColor(0.1f, 0.1f, 0.1f, 0.8f));
	Size->AddChild(Border);

	UOverlay* Overlay = WidgetTree->ConstructWidget<UOverlay>(UOverlay::StaticClass(), TEXT("Overlay"));
	Border->SetContent(Overlay);

	Icon = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Icon"));
	if (UOverlaySlot* S = Overlay->AddChildToOverlay(Icon))
	{
		S->SetHorizontalAlignment(HAlign_Fill);
		S->SetVerticalAlignment(VAlign_Fill);
	}
	Icon->SetBrushSize(FVector2D(64.f, 64.f));

	CountText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("CountText"));
	CountText->SetJustification(ETextJustify::Right);
	CountText->SetColorAndOpacity(FSlateColor(FLinearColor::White));
	if (UOverlaySlot* TS = Overlay->AddChildToOverlay(CountText))
	{
		TS->SetHorizontalAlignment(HAlign_Right);
		TS->SetVerticalAlignment(VAlign_Bottom);
		TS->SetPadding(FMargin(2.f));
	}

	return Super::RebuildWidget();
}

void UInventorySlotWidget::SetData(const FItemStack& Stack, UTexture2D* IconTexture, bool bActive)
{
	if (Icon)
	{
		if (IconTexture)
		{
			Icon->SetBrushFromTexture(IconTexture, false); // do not match size, we set it explicitly
			Icon->SetBrushSize(FVector2D(64.f, 64.f));
			Icon->SetColorAndOpacity(FLinearColor::White);
		}
		else
		{
			Icon->SetBrushFromTexture(nullptr);
			Icon->SetColorAndOpacity(FLinearColor(0.2f, 0.2f, 0.2f, 1.f));
		}
	}
	if (CountText)
	{
		const bool bShowCount = Stack.Count > 1;
		CountText->SetText(bShowCount ? FText::AsNumber(Stack.Count) : FText());
		CountText->SetVisibility(bShowCount ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	}
	ApplyHighlight(bActive);
}

void UInventorySlotWidget::ApplyHighlight(bool bActive)
{
	if (UBorder* Border = Cast<UBorder>(Cast<UPanelWidget>(WidgetTree->RootWidget)->GetChildAt(0)))
	{
		Border->SetBrushColor(bActive ? FLinearColor(0.2f, 0.6f, 1.f, 0.9f) : FLinearColor(0.1f, 0.1f, 0.1f, 0.8f));
	}
	if (Icon)
	{
		Icon->SetOpacity(bActive ? 1.0f : 0.7f);
	}
	if (CountText)
	{
		CountText->SetRenderOpacity(bActive ? 1.0f : 0.85f);
	}
}
