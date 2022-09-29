#pragma once

using namespace System;

namespace ChitaModel {
    public ref class Pet{
    public:
        property int Id;
        property String^ Name;
        property int Age;
        property String^ Species;
        property char Vaccines;
        property String^ Conduct;
        property array <Byte>^ Photo;
        property char Status;

    public:
        Pet();
        Pet(int Id, String^ Name, int Age, String^ Species, char Vaccines,
            String^ Conduct, array <Byte>^ Photo, char Status);
    };
}