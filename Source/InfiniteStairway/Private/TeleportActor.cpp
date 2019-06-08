// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleportActor.h"

#include "DrawDebugHelpers.h"

// Sets default values
ATeleportActor::ATeleportActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Register Events
	AActor::OnActorBeginOverlap.AddDynamic(this, &ATeleportActor::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &ATeleportActor::OnOverlapEnd);

}

// Called when the game starts or when spawned
void ATeleportActor::BeginPlay()
{
	Super::BeginPlay();
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Green, true, -1, 0, 5);

	
}

// Called every frame
void ATeleportActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ATeleportActor::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	//if the overlapping actor is the specific actor we identified in the editor
	if (OtherActor && (OtherActor != this) && OtherActor == SpecificActor)
	{
		//print("Overlap Begin");
		//printFString("Overlapping Actor = %s", *OtherActor->GetName());

		int asds = 10;
	}
}

void ATeleportActor::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	//if the overlapping actor is the specific actor we identified in the editor
	if (OtherActor && (OtherActor != this) && OtherActor == SpecificActor)
	{
		int asds = 10;


		//print("Overlap End");
		//printFString("%s has left the Trigger Box", *OtherActor->GetName());
	}
}