/**
 * Project Untitled
 */
#include "pch.h"

#include "ExoticPet.h"

ChitaiModel::ExoticPet::ExoticPet() {

}

ChitaiModel::ExoticPet::ExoticPet(int Id, String^ Name, int Age, String^ Species, char Vaccines,
								  String^ Conduct,String^ SpecialCares, String^ SpecialFood, 
								  bool Poisonous) {
	this->Id = Id;
	this->Name = Name;
	this->Age = Age;
	this->Species = Species;
	this->Vaccines = Vaccines;
	this->Conduct = Conduct;
	this->SpecialCares = SpecialCares;
	this->SpecialFood = SpecialFood;
	this->Poisonous = Poisonous;
}
