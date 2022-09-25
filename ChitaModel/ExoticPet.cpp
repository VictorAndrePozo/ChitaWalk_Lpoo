/**
 * Project Untitled
 */
#include "pch.h"

#include "ExoticPet.h"

ChitaiModel::ExoticPet::ExoticPet() {

}

ChitaiModel::ExoticPet::ExoticPet(String^ SpecialCares, String^ SpecialFood, bool Poisonous) {
	this->SpecialCares = SpecialCares;
	this->SpecialFood = SpecialFood;
	this->Poisonous = Poisonous;
}
