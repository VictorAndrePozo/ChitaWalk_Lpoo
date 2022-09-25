#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class Achievment{
	public:
		property int Id;
		property String^ Description;
	public:
		Achievment();
		Achievment(int id, String^ Descriptionn);
	};
}