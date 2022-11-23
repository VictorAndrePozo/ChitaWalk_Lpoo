/*
    La clase Discount modela a una transacción de venta.
*/
#pragma once
#include "Promotions.h"
#include "PetOwner.h"
#include "Supervisor.h"
#include "DiscountDetail.h"

using namespace System;
using namespace System::Collections::Generic;
namespace ChitaModel {
    [Serializable]
    public ref class Discount {
    public:
        property int Id;
        property String^ TxnDate;
        property char Status;
        property double Total;
        property PetOwner^ PetOwner;
        property Supervisor^ Supervisor;
        property List<DiscountDetail^>^ DiscountDetail;
    };
}