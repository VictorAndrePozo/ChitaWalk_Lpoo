#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class PetOwner{
	public:
		property String^ Birthday;
	public:
		PetOwner();
		PetOwner(String^ Birthday);
	};
}