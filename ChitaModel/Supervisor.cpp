#include "pch.h"

#include "Supervisor.h"

ChitaModel::Supervisor::Supervisor() {

}


ChitaModel::Supervisor::Supervisor(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
									String^ Email, char Gender, int Id, String^ username, String^ password,
									String^ Lastname, String^ Firstname, int Valoration, String^ Award,
									String^ Area, array <Byte>^ Photo, char Status) {
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
	this->Area = Area;
	this->Photo = Photo;
	this->Status = Status;
}