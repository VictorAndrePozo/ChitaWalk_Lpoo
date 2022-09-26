/**
 * Project Untitled
 */
#include "pch.h"

#include "ServiceDetail.h"

ChitaiModel::ServiceDetail::ServiceDetail() {

}

ChitaiModel::ServiceDetail::ServiceDetail(DateTime Date, double Amount, int Id, Service^ objService, Pet^ objPet) {
	this->objService = objService;
	this->objPet = objPet;
	this->Date = Date;
	this->Amount = Amount;
	this->Id = Id;
}