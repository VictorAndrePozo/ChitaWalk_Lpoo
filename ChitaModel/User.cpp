/**
 * Project Untitled
 */
#include "pch.h"

#include "User.h"

ChitaiModel::User::User() {

}

ChitaiModel::User::User(int Id, String^ username, String^ password, String^ Lastname,
	String^ Firstname, int Valoration, String^ Award) {
	this->Id = Id;
	this->username = username;
	this->password = password;
	this->Lastname = Lastname;
	this->Firstname = Firstname;
	this->Valoration = Valoration;
}