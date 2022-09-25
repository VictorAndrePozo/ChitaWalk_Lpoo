/**
 * Project Untitled
 */
#include "pch.h"

#include "Person.h"

ChitaiModel::Person::Person() {

}

ChitaiModel::Person::Person(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
							String^ Email, char Gender) {
	this->Dni = Dni;
	this->DocNumbrer = DocNumbrer;
	this->Address = Address;
	this->PhoneNumber = PhoneNumber;
	this->Email = Email;
	this->Gender = Gender;
}
