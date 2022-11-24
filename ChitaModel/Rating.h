#pragma once

#include "Carer.h"

using namespace System;

namespace ChitaModel {
	public ref class Rating {
	public:
		property int Id;
		property String^ Comment1;
		property String^ Comment2;
		property String^ Comment3;
		property String^ Comment4;
		property int Stars;
		property String^ Advice;
		property Carer^ objCarer;

	public:
		Rating();
		Rating(int id, String^ Comment1, String^ Comment2, String^ Comment3, String^ Comment4, int Stars, String^ Advice, Carer^ objCarer);
	};
}