/**
 * Project Untitled
 */
#include "pch.h"

#include "Pet.h"

ChitaModel::Pet::Pet() {

}

ChitaModel::Pet::Pet(int Id, String^ Name, int Age, String^ Species, char Vaccines,
					  String^ Conduct) {
	this->Id = Id;
	this->Name = Name;
	this->Age = Age;
	this->Species = Species;
	this->Vaccines = Vaccines;
	this->Conduct = Conduct;

}
