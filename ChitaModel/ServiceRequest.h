#include "PetOwner.h"
#include "Carer.h"
#include "ServiceDetail.h"
#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace ChitaiModel {
	public ref class ServiceRequest{
	public:
		property DateTime Date;
		property char Status;
		property int Id;
		property List<ServiceDetail^ >^ ServiceDetailList;
		property PetOwner^ PetOwner;
		property Carer^ Carer;
		property ServiceDetail^ ServiceDetail;
	public:
		ServiceRequest();
		ServiceRequest(DateTime Date, char Status, int Id);
	};
}