#pragma once

using namespace System;

namespace ChitaiModel {
    public ref class User{
    public:
        property int Id;
        property String^ username;
        property String^ password;
        property String^ Lastname;
        property String^ Firstname;
        property int Valoration;
        property String^ Award;
    public:
        User();
        User(int Id, String^ username, String^ password, String^ Lastname,
            String^ Firstname, int Valoration, String^ Award);
    };
}