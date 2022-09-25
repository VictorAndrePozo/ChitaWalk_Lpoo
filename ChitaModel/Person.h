#pragma once

using namespace System;

namespace ChitaiModel {
    public ref class Person{
    public:
        property int Dni;
        property String^ DocNumbrer;
        property String^ Address;
        property String^ PhoneNumber;
        property String^ Email;
        property char Gender;
    public:
        Person();
        Person(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
               String^ Email, char Gender);
    };
}