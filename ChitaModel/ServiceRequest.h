#include "PetOwner.h"
#include "Carer.h"
#include "ServiceDetail.h"
#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace ChitaModel {
	public ref class ServiceRequest{
	public:
		property DateTime Date;
		property char Status;
		property int Id;
		property List<ServiceDetail^ >^ objServiceDetailList;
		property PetOwner^ objPetOwner;
		property Carer^ objCarer;
		property ServiceDetail^ objServiceDetail;
	public:
		ServiceRequest();
		ServiceRequest(DateTime Date, char Status, int Id, List<ServiceDetail^ >^ objServiceDetailList,
						PetOwner^ objPetOwner, Carer^ objCarer, ServiceDetail^ objServiceDetail);
	};
}