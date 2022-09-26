/**
 * Project Untitled
 */
#include "pch.h"

#include "PetOwner.h"

ChitaiModel::PetOwner::PetOwner() {

}

ChitaiModel::PetOwner::PetOwner(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
								String^ Email, char Gender,int Id, String^ username, String^ password,
								String^ Lastname,String^ Firstname, int Valoration, String^ Award,
								String^ Birthday,Pet^ objPet) {
	this->Dni = Dni;
	this->DocNumbrer = DocNumbrer;
	this->Address = Address;
	this->PhoneNumber = PhoneNumber;
	this->Email = Email;
	this->Gender = Gender;
	this->Id = Id;
	this->username = username;
	this->password = password;
	this->Lastname = Lastname;
	this->Firstname = Firstname;
	this->Valoration = Valoration;
	this->Birthday = Birthday;
	this->objPet = objPet;
}