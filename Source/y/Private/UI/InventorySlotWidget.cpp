#include "UI/InventorySlotWidget.h"

#include "Blueprint/WidgetTree.h"

void UInventorySlotWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Construct basic subwidgets if not bound from a designer (we avoid BP, but code-safe)
	if (!Icon)
	{
		Icon = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass(), TEXT("Icon"));
		WidgetTree->RootWidget = Icon; // simplest root if nothing else
	}
	if (!CountText)
	{
		CountText = WidgetTree->ConstructWidget<UTextBlock>(UTextBlock::StaticClass(), TEXT("CountText"));
		CountText->SetJustification(ETextJustify::Right);
		CountText->SetColorAndOpacity(FSlateColor(FLinearColor::White));
	}
}

void UInventorySlotWidget::SetData(const FItemStack& Stack, UTexture2D* IconTexture, bool bActive)
{
	if (Icon)
	{
		Icon->SetBrushFromTexture(IconTexture, true);
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
	if (Icon)
	{
		Icon->SetOpacity(bActive ? 1.0f : 0.6f);
	}
	if (CountText)
	{
		CountText->SetRenderOpacity(bActive ? 1.0f : 0.8f);
	}
}
