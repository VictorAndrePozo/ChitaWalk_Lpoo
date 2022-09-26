/**
 * Project Untitled
 */
#include "pch.h"

#include "ServiceRequest.h"

ChitaiModel::ServiceRequest::ServiceRequest() {

}

ChitaiModel::ServiceRequest::ServiceRequest(DateTime Date, char Status, int Id, 
											List<ServiceDetail^ >^ objServiceDetailList,
											PetOwner^ objPetOwner, Carer^ objCarer, ServiceDetail^ objServiceDetail) {
	this->objServiceDetailList = objServiceDetailList;
	this->objPetOwner = objPetOwner;
	this->objCarer = objCarer;
	this->objServiceDetail = objServiceDetail;
	this->Date = Date;
	this->Status = Status;
	this->Id = Id;
}