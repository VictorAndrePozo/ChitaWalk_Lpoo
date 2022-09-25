#pragma once

using namespace System;

namespace ChitaiModel {
    public ref class Service{
    public:
        property int Time;
        property double Price;
    public:
        Service();
        Service(int Time, double Price);
    };
}