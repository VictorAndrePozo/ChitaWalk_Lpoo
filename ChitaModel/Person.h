#pragma once

using namespace System;

namespace ChitaModel {
    [Serializable]
    public ref class Person{
    public:
        property int Dni;
        property String^ DocNumbrer;
        property String^ Address;
        property String^ PhoneNumber;
        property String^ Email;
        property char Gender;
        property array <Byte>^ Photo;
        property char Status;
        property String^ District;

    public:
        Person();
        Person(int Dni, String^ DocNumbrer, String^ Address, String^ PhoneNumber,
               String^ Email, char Gender, array <Byte>^ Photo, char Status, String^ District);
    };
}