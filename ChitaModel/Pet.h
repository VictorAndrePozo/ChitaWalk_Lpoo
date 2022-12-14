#pragma once

using namespace System;

namespace ChitaModel {
    [Serializable]
    public ref class Pet{
    public:
        property int Id;
        property String^ Name;
        property int Age;
        property String^ Species;
        property String^ Vaccines;
        property String^ Conduct;
        property array <Byte>^ Photo;
        property String^ Kind;

    public:
        Pet();
        Pet(int Id, String^ Name, int Age, String^ Species, String^ Vaccines,
            String^ Conduct, array <Byte>^ Photo, String^ Kind);
    };
}