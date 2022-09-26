#include "Service.h"
#include "Pet.h"
#pragma once

using namespace System;

namespace ChitaModel {
	public ref class ServiceDetail{
	public:
		property DateTime Date;
        property double Amount;
        property int Id;
		property Service^ objService;
		property Pet^ objPet;
	public:   
		ServiceDetail();
		ServiceDetail(DateTime Date, double Amount, int Id, Service^ objService, Pet^ objPet);
	};
}