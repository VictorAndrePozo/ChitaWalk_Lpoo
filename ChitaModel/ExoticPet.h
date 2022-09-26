#include "Pet.h"
#pragma once

using namespace System;

namespace ChitaModel {
	public ref class ExoticPet : public Pet{
	public:
		property String^ SpecialCares;
		property String^ SpecialFood;
		property bool Poisonous;
	public:
		ExoticPet();
		ExoticPet(int Id, String^ Name, int Age, String^ Species, char Vaccines,
				String^ Conduct, String^ SpecialCares, String^ SpecialFood,
				bool Poisonous);
	};
}