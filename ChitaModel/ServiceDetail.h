#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class ServiceDetail{
	public:
		property DateTime Date;
        property double Amount;
        property int Id;
	public:   
		ServiceDetail();
		ServiceDetail(DateTime Date, double Amount, int Id);
	};
}