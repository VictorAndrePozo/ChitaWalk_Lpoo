/**
 * Project Untitled
 */
#include "pch.h"

#include "Disponibility.h"

ChitaModel::Disponibility::Disponibility() {

}

ChitaModel::Disponibility::Disponibility(int Id,String^ Schedule,DateTime Date,Carer^ objCarer) {
	this->Id = Id;
	this->Schedule = Schedule;
	this->Date = Date;
	this->objCarer = objCarer;
}
