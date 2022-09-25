#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class ExoticPet {
	public:
		property String^ SpecialCares;
		property String^ SpecialFood;
		property bool Poisonous;
	public:
		ExoticPet();
		ExoticPet(String^ SpecialCares, String^ SpecialFood, bool Poisonous);
	};
}