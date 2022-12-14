#include "pch.h"

#include "Walker.h"

ChitaModel::Walker::Walker() {

}




ChitaModel::Walker::Walker(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
	String^ Email, char Gender, int Id, String^ username,
	String^ password, String^ Lastname,
	String^ Firstname, int Valoration, String^ Award, int Experience,
	int Level, String^ Warranty, double Salary, String^ StrollArea, array <Byte>^ Photo, char Status) {
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
	this->Award = Award;
	this->Experience = Experience;
	this->Level = Level;
	this->Warranty = Warranty;
	this->Salary = Salary;
	this->StrollArea = StrollArea;
	this->Photo = Photo;
	this->Status = Status;
}