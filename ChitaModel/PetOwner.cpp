/**
 * Project Untitled
 */
#include "pch.h"

#include "PetOwner.h"

ChitaiModel::PetOwner::PetOwner() {

}

ChitaiModel::PetOwner::PetOwner(int Id, String^ username, String^ password, String^ Lastname,
								String^ Firstname, int Valoration, String^ Award, String^ Birthday) {
	this->Id = Id;
	this->username = username;
	this->password = password;
	this->Lastname = Lastname;
	this->Firstname = Firstname;
	this->Valoration = Valoration;
	this->Birthday = Birthday;
}