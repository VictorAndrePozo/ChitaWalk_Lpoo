#include "Carer.h"
#include "Service.h"
#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class CarerService {
	public:
		property char Status;
		property Carer^ objCarer;
		property Service^ objService;
	public:
		CarerService();
		CarerService(char Status,Carer^ objCarer,Service^ objService);
	};
}