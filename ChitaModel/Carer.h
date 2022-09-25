#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class Carer{
	public:
        property int Experience;
        property int Level;
        property int Warranty;
        property double Salary;
    public:
        Carer();
        Carer(int Experience, int Level, int Warranty, double Salary);
	};
}