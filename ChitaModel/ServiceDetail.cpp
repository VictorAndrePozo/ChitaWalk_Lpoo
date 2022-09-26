/**
 * Project Untitled
 */
#include "pch.h"

#include "ServiceDetail.h"

ChitaModel::ServiceDetail::ServiceDetail() {

}

ChitaModel::ServiceDetail::ServiceDetail(DateTime Date, double Amount, int Id, Service^ objService, Pet^ objPet) {
	this->objService = objService;
	this->objPet = objPet;
	this->Date = Date;
	this->Amount = Amount;
	this->Id = Id;
}