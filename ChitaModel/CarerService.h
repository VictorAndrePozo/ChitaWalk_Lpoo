#include "Carer.h"
#include "Service.h"
#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class CarerService {
	public:
		property char Status;
		property Carer^ Carer;
		property Service^ Service;
	public:
		CarerService();
		CarerService(char Status);
	};
}