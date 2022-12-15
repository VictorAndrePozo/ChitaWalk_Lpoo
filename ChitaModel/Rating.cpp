#include "pch.h"
#include "Rating.h"

ChitaModel::Rating::Rating() {

}
ChitaModel::Rating::Rating(int id, int CarerId, String^ Comment1, String^ Comment2, String^ Comment3, String^ Comment4, int Stars, String^ Advice, Carer^ objCarer)
{
	this->Comment1 = Comment1;
	this->Comment2 = Comment2;
	this->Comment3 = Comment3;
	this->Comment4 = Comment4;
	this->Id = Id;
	this->CarerId = CarerId;
	this->Stars = Stars;
	this->Advice = Advice;
	this->objCarer = objCarer;
}