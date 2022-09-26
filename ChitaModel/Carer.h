/*
    Clase que refiere al usuario que cuida a las mascotasssss.
*/
#pragma once

#include "User.h"

using namespace System;

namespace ChitaiModel {
	public ref class Carer : public User {
	public:
		property int Experience;
		property int Level;
		property int Warranty;
		property double Salary;
	public:
		Carer();
		Carer(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
			String^ Email, char Gender, int Id, String^ username,
			String^ password, String^ Lastname,
			String^ Firstname, int Valoration, String^ Award, int Experience,
			int Level, int Warranty, double Salary);
	};
}