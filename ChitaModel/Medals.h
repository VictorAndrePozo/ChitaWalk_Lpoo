#pragma once

using namespace System;

namespace ChitaiModel {
	public ref class Medals{
	public:
        property int Id;
        property String^ Description;
        property String^ Icon;
	public:
		Medals();
		Medals(int Id, String^ Description, String^ Icon);
	};
}