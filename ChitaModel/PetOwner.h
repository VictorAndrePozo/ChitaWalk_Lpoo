
#include "User.h"
#include "Pet.h"
#pragma once

using namespace System;

namespace ChitaModel {
	[Serializable]
	public ref class PetOwner: public User{
	public:
		property String^ Birthday;
		property Pet^ objPet;
	public:
		PetOwner();
		PetOwner(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
				String^ Email, char Gender, int Id, String^ username, String^ password,
				String^ Lastname, String^ Firstname, int Valoration, String^ Award,
				String^ Birthday, Pet^ objPet, array <Byte>^ Photo, char Status);
	};
}