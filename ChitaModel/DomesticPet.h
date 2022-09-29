
#include "Pet.h"
#pragma once

using namespace System;

namespace ChitaModel {
	public ref class DomesticPet: public Pet{
	public:
		property String^ CommercialFood;
	public:
		DomesticPet();
		DomesticPet(int Id, String^ Name, int Age, String^ Species, char Vaccines,
					String^ Conduct,String^ CommercialFood, array <Byte>^ Photo, char Status);
	};
}