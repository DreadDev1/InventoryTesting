// Fill out your copyright notice in the Description page of Project Settings.


#include "Interaction/Inv_HighlightableMesh.h"

void UInv_HighlightableMesh::Highlight_Implementation()
{
	SetOverlayMaterial(HighlightMaterial);
}

void UInv_HighlightableMesh::UnHighlight_Implementation()
{
	
	SetOverlayMaterial(nullptr);
}
