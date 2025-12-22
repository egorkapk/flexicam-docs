// Copyright (c) 2025 Egor Ermakov.


#include "Examples/TopDownCameraMode.h"

#include "Components/BoxComponent.h"
#include "Examples/TopDownCameraModeTrigger.h"

UTopDownCameraMode::UTopDownCameraMode()
{
	DefaultPivotRotation = FRotator::ZeroRotator;
	PivotLocation = FVector::ZeroVector;
}

void UTopDownCameraMode::OnActivation()
{
	if (UBoxComponent* ArenaBox = GetTargetVolume())
	{
		// Position the pivot based on the bounds of the target volume.
		const float BoundsSizeMax = ArenaBox->GetScaledBoxExtent().GetAbsMax();
		const float Distance = BoundsSizeToDistance.GetRichCurveConst()->Eval(BoundsSizeMax);
		PivotLocation = ArenaBox->GetComponentLocation() - DefaultPivotRotation.Vector() * Distance;
	}
}

void UTopDownCameraMode::UpdateView_Implementation(float DeltaTime)
{
	ModeView.Location = PivotLocation;
	ModeView.Rotation = DefaultPivotRotation;
	ModeView.ControlRotation = ModeView.Rotation;
	ModeView.FieldOfView = FieldOfView;
}

UBoxComponent* UTopDownCameraMode::GetTargetVolume() const
{
	ATopDownCameraModeTrigger* Trigger = nullptr;

	if (AActor* TargetActor = GetTargetActor())
	{
		TArray<AActor*> OverlappingActors;
		TargetActor->GetOverlappingActors(OverlappingActors, ATopDownCameraModeTrigger::StaticClass());
		if (OverlappingActors.Num() > 0)
		{
			// Just get the first one for this example.
			Trigger = Cast<ATopDownCameraModeTrigger>(OverlappingActors[0]);
		}
	}
	return Trigger ? Trigger->GetTriggerVolume() : nullptr;
}
