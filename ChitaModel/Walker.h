#pragma once

#include "Carer.h"

using namespace System;

namespace ChitaModel {
	[Serializable]

	public ref class Walker : public Carer {
	public:
		property String^ StrollArea;
	public:
		Walker();
		Walker(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
			String^ Email, char Gender, int Id, String^ username,
			String^ password, String^ Lastname,
			String^ Firstname, int Valoration, String^ Award, int Experience,
			int Level, String^ Warranty, double Salary, String^ StrollArea, array <Byte>^ Photo, char Status, String^ District);
	};
}