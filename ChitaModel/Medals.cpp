/**
 * Project Untitled
 */
#include "pch.h"

#include "Medals.h"

ChitaiModel::Medals::Medals() {

}

ChitaiModel::Medals::Medals(int Id, String^ Description, String^ Icon) {
	this->Id = Id;
	this->Description = Description;
	this->Icon = Icon;
}
