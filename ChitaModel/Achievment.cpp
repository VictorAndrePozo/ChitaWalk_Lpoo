/**
 * Project Untitled
 */
#include "pch.h"

#include "Achievment.h"

ChitaiModel::Achievment::Achievment() {

}

ChitaiModel::Achievment::Achievment(int Id,String^ Description,Carer^ objCarer, Medals^ objMedals) {
	this->Id = Id;
	this->Description = Description;
	this->objCarer = objCarer;
	this->objMedals = objMedals;
}
