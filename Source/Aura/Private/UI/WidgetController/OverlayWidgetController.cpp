// Copyright LightBear Software


#include "UI/WidgetController/OverlayWidgetController.h"
#include <Player/AuraPlayerState.h>
#include <AbilitySystem/AuraAttributeSet.h>

void UOverlayWidgetController::BroadcastInitialValues()
{
	const UAuraAttributeSet* AuraAttributeSet = CastChecked<UAuraAttributeSet>(AttributeSet);

	OnHealthChanged.Broadcast(AuraAttributeSet->GetHealth());
	OnMaxHealthChanged.Broadcast(AuraAttributeSet->GetMaxHealth());
}
