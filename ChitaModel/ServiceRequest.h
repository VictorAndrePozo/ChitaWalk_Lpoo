#include "PetOwner.h"
#include "Carer.h"
#include "ServiceDetail.h"
#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace ChitaModel {
	[Serializable]
	public ref class ServiceRequest{
	public:
		property int Id;
		property String^ Kind;
		property String^ Pet;
		property String^ Service;
		property String^ District;
		property String^ DateRequest;
		property String^ DateService;
		property String^ DateServiceInit;
		property String^ DateServiceEnd;
		property String^ PetOwner;
		property String^ AdressStart;
		property String^ AdressEnd;
		//property PetOwner^ objPetOwner;
		//property Carer^ objCarer;
		
		property String^ Carer;
		property int CarerId;
		property double SubTotal;
		property double IGV;
		property double TotalAmount;

		property String^ Status;
		property String^ previousForm;

		property ServiceDetail^ objServiceDetail;
		property List<ServiceDetail^ >^ objServiceDetailList;
	public:
		ServiceRequest();
		ServiceRequest(int Id, String^ Kind, String^ Pet, String^ Service, String^ District, String^ DateRequest, String^ DateService,
			String^ DateServiceInit, String^ DateServiceEnd,  String^ PetOwner, String^ AdressStart, String^ AdressEnd, String^ Status,
		    ServiceDetail^ objServiceDetail, List<ServiceDetail^ >^ objServiceDetailList, double SubTotal, double IGV, double TotalAmount, String^ Carer,
		    int CarerId, String^ previousForm);
	};
}