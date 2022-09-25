/**
 * Project Untitled
 */
#include "pch.h"

#include "Carer.h"

ChitaiModel::Carer::Carer() {

}

ChitaiModel::Carer::Carer(int Experience, int Level,int Warranty,double Salary) {
    this->Experience = Experience;
    this->Level = Level;
    this->Warranty = Warranty;
    this->Salary = Salary;
}