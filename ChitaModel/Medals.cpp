/**
 * Project Untitled
 */
#include "pch.h"

#include "Medals.h"

ChitaModel::Medals::Medals() {

}

ChitaModel::Medals::Medals(int Id, String^ Description, String^ Icon) {
	this->Id = Id;
	this->Description = Description;
	this->Icon = Icon;
}
