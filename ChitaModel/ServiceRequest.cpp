/**
 * Project Untitled
 */
#include "pch.h"

#include "ServiceRequest.h"

ChitaiModel::ServiceRequest::ServiceRequest() {

}

ChitaiModel::ServiceRequest::ServiceRequest(DateTime Date, char Status, int Id) {
	this->Date = Date;
	this->Status = Status;
	this->Id = Id;
}