#pragma once

#include "User.h"
#include "Pet.h"

using namespace System;

namespace ChitaModel {
	public ref class Supervisor : public User {
	public:
		property String^ Area;
	public:
		Supervisor();
		Supervisor(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
			String^ Email, char Gender, int Id, String^ username, String^ password,
			String^ Lastname, String^ Firstname, int Valoration, String^ Award,
			String^ Area);
	};
}