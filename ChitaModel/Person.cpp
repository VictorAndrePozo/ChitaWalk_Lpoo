/**
 * Project Untitled
 */
#include "pch.h"

#include "Person.h"

ChitaModel::Person::Person() {

}


ChitaModel::Person::Person(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
							String^ Email, char Gender, array<Byte>^ Photo, char Status,String^ District) {
	this->Dni = Dni;
	this->DocNumbrer = DocNumbrer;
	this->Address = Address;
	this->PhoneNumber = PhoneNumber;
	this->Email = Email;
	this->Gender = Gender;
	this->Photo = Photo;
	this->Status = Status;
	this->District = District;
}
