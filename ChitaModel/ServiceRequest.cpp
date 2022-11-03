/**
 * Project Untitled
 */
#include "pch.h"

#include "ServiceRequest.h"

ChitaModel::ServiceRequest::ServiceRequest() {

}

ChitaModel::ServiceRequest::ServiceRequest(int Id, String^ Kind, String^ Pet, String^ Service, String^ District, String^ DateRequest, String^ DateService,
	String^ DateServiceInit, String^ DateServiceEnd, String^ PetOwner, String^ AdressStart, String^ AdressEnd, Carer^ objCarer, String^ Status,
	ServiceDetail^ objServiceDetail, List<ServiceDetail^ >^ objServiceDetailList) {

	this->Id = Id;
	this->Kind = Kind;
	this->Pet = Pet;
	this->Service = Service;
	this->District = District;
	this->DateRequest = DateRequest;
	this->DateService = DateService;
	this->DateServiceInit = DateServiceInit;
	this->DateServiceEnd = DateServiceEnd;

	this->AdressStart = AdressStart;
	this->AdressEnd = AdressEnd;
	this->Status = Status;

	this->objServiceDetailList = objServiceDetailList;
	this->PetOwner = PetOwner;
	this->objCarer = objCarer;
	this->objServiceDetail = objServiceDetail;
	
}		
