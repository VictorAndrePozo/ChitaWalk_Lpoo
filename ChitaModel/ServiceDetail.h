#include "Service.h"
#include "Pet.h"
#include "Rating.h"

#pragma once

using namespace System;

namespace ChitaModel {
	[Serializable]
	public ref class ServiceDetail{
	public:
		property String^ Date;
        property double Amount;
        property int Id;
		property Service^ objService;
		property Pet^ objPet;
		property Rating^ objRating;
	public:   
		ServiceDetail();
		ServiceDetail(String^ Date, double Amount, int Id, Service^ objService, Pet^ objPet, Rating^ objRating);
	};
}