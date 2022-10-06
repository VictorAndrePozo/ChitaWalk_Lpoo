
#include "Person.h"
#pragma once

using namespace System;

namespace ChitaModel {
    public ref class User: public Person{
    public:
        property int Id;
        property String^ username;
        property String^ password;
        property String^ Lastname;
        property String^ Firstname;
        property int Valoration;
        property String^ Award;
        //un char/string q identifique carer o owner 
    public:
        User();
        User(int Id, String^ username, String^ password, String^ Lastname,
            String^ Firstname, int Valoration, String^ Award);
    };
}