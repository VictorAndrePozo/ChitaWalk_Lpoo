/**
 * Project Untitled
 */
#include "pch.h"

#include "ServiceRequest.h"

ChitaModel::ServiceRequest::ServiceRequest() {

}

ChitaModel::ServiceRequest::ServiceRequest(int Id, String^ Kind, String^ Pet, String^ Service, String^ District, String^ DateRequest, String^ DateService,
	String^ DateServiceInit, String^ DateServiceEnd, String^ PetOwner, String^ AdressStart, String^ AdressEnd, String^ Status,
	ServiceDetail^ objServiceDetail, List<ServiceDetail^ >^ objServiceDetailList, double SubTotal, double IGV, double TotalAmount, String^ Carer,
	int CarerId, String^ previousForm) {

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

	this->Carer = Carer;
	this->CarerId = CarerId;
	this->SubTotal = SubTotal;
	this->IGV = IGV;
	this->TotalAmount = TotalAmount;
	this->Status = Status;
	this->previousForm = previousForm;

	this->objServiceDetailList = objServiceDetailList;
	this->PetOwner = PetOwner;
	//this->objCarer = objCarer;
	this->objServiceDetail = objServiceDetail;
	
}		
