#pragma once

using namespace System;

namespace ChitaModel {
    public ref class Service{
    public:
        property int Time;
        property String^ Description;
        property double Price;
    public:
        Service();
        Service(int Time, double Price, String^ Description);
    };
}