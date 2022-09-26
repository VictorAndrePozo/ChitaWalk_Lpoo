
#include "User.h"
#include "Pet.h"
#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class PetOwner: public User{
	public:
		property String^ Birthday;
		property Pet^ Pet;
	public:
		PetOwner();
		PetOwner(int Id, String^ username, String^ password, String^ Lastname,
				String^ Firstname, int Valoration, String^ Award,String^ Birthday);
	};
}