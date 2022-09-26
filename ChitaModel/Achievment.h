#pragma once

#include "Carer.h"
#include "Medals.h"

using namespace System;

namespace ChitaiModel {
	public ref class Achievment{
	public:
		property int Id;
		property String^ Description;
		property Carer^ objCarer;
		property Medals^ objMedals;
	public:
		Achievment();
		Achievment(int id, String^ Descriptionn,Carer^ objCarer, Medals^ objMedals);
	};
}