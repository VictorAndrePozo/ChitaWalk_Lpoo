/*
    La clase Product modela un producto que se gestiona en el sistema de ventas.
*/
#pragma once

using  namespace System;

namespace ChitaModel {
    public ref class Promotions {
    public:
        int Id;
        String^ Name;
        String^ Description;
        double Price;
        int Stock;
        char Status;
        Promotions() {}
        Promotions(const Promotions^& copier);
    };
}
