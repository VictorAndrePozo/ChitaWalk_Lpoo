/**
 * Project Untitled
 */
#include "pch.h"

#include "CarerService.h"

ChitaModel::CarerService::CarerService() {

}

ChitaModel::CarerService::CarerService(char Status, Carer^ objCarer, Service^ objService) {
	this->objCarer = objCarer;
	this->objService = objService;
	this->Status = Status;
}
