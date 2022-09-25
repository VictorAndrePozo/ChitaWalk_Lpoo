#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class DomesticPet {
	public:
		property String^ CommercialFood;
	public:
		DomesticPet();
		DomesticPet(String^ CommercialFood);
	};
}