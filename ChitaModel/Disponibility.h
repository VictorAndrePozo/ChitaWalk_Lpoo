#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class Disponibility{
	public:
        property int Id;
        property String^ Schedule;
        property DateTime Date;
	public:
		Disponibility();
		Disponibility(int Id, String^ Schedule, DateTime Date);
	};
}