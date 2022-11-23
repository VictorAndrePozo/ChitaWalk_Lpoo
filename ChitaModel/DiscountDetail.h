/**
 * Project Untitled
 */
#pragma once

using  namespace System;

namespace ChitaModel {
    [Serializable]
    public ref class DiscountDetail {
    public:
        property int Id;
        property int Quantity;
        property double UnitPrice;
        property String^ Name;
        property String^ Description;
        property String^ Deadline;
        property String^ Status;
    };
}