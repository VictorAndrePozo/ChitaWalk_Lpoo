
#include "User.h"
#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class PetOwner: public User{
	public:
		property String^ Birthday;
	public:
		PetOwner();
		PetOwner(String^ Birthday);
	};
}