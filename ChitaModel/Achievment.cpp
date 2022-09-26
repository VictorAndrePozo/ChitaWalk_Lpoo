/**
 * Project Untitled
 */
#include "pch.h"

#include "Achievment.h"

ChitaModel::Achievment::Achievment() {

}

ChitaModel::Achievment::Achievment(int Id,String^ Description,Carer^ objCarer, Medals^ objMedals) {
	this->Id = Id;
	this->Description = Description;
	this->objCarer = objCarer;
	this->objMedals = objMedals;
}
