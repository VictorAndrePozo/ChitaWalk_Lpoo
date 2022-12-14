/*
    La clase Product modela un producto que se gestiona en el sistema de ventas.
*/
#pragma once

using  namespace System;

namespace ChitaModel {
    [Serializable]
    public ref class Promotions {
    public:
        int Id;
        String^ PromotionType;
        String^ Name;
        String^ Description;
        double PromotionValue;
        String^ DeadLine;
        int Stock;
        char Status;
        array <Byte>^ Photo;
        Promotions() {}
        Promotions(const Promotions^& copier);
    };
}
