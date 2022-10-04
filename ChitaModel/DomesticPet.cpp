/**
 * Project Untitled
 */
#include "pch.h"

#include "DomesticPet.h"

ChitaModel::DomesticPet::DomesticPet() {

}


ChitaModel::DomesticPet::DomesticPet(int Id, String^ Name, int Age, String^ Species, String^ Vaccines,
									  String^ Conduct,String^ CommercialFood, array <Byte>^ Photo, String^ Kind) {
	this->Id = Id;
	this->Name = Name;
	this->Age = Age;
	this->Species = Species;
	this->Vaccines = Vaccines;
	this->Conduct = Conduct;
	this->CommercialFood = CommercialFood;
	this->Photo = Photo;
	this->Kind = Kind;
}
