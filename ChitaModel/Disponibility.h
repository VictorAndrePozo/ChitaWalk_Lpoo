#include "Carer.h"
#pragma once

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
		Disponibility(int Id, String^ Schedule, DateTime Date);
	};
}