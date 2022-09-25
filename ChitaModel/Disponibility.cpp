/**
 * Project Untitled
 */
#include "pch.h"

#include "Disponibility.h"

ChitaiModel::Disponibility::Disponibility() {

}

ChitaiModel::Disponibility::Disponibility(int Id,String^ Schedule,DateTime Date) {
	this->Id = Id;
	this->Schedule = Schedule;
	this->Date = Date;
}
