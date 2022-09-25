#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class ServiceRequest{
	public:
		property DateTime Date;
		property char Status;
		property int Id;
	public:
		ServiceRequest();
		ServiceRequest(DateTime Date, char Status, int Id);
	};
}