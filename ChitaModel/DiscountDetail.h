/**
 * Project Untitled
 */
#include "Promotions.h"

#pragma once

using  namespace System;

namespace ChitaModel {
    [Serializable]
    public ref class DiscountDetail {
    public:
       
        property int Id;
        property String^ Name;
        property String^ Description;
        property int Quantity;
        property String^ DiscountType;
        property double UnitDiscountValue;
        property String^ DeadLine;
        property double SubTotal;
        property Promotions^ Promotions;
    };
}