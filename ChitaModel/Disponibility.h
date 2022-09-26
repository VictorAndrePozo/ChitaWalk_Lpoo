
#pragma once

#include "Carer.h"

using namespace System;

namespace ChitaiModel {
	public ref class Disponibility{
	public:
        property int Id;
        property String^ Schedule;
        property DateTime Date;
		property Carer^ objCarer;
	public:
		Disponibility();
		Disponibility(int Id, String^ Schedule, DateTime Date,Carer^ objCarer);
	};
}