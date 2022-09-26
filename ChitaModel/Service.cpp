
#include "pch.h"

#include "Service.h"

ChitaModel::Service::Service() {

}

ChitaModel::Service::Service(int Time, double Price, String^ Description) {
	this->Description = Description;
	this->Time = Time;
	this->Price = Price;
}



/**
void Service::Stroll() {

}

void Service::Care() {

}

void Service::Transport() {

}
 * Service implementation
 */