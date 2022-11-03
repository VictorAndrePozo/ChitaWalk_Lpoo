#include "pch.h"
#include "Promotions.h"

ChitaModel::Promotions::Promotions(const Promotions^& copier)
{
    Id = copier->Id;
    Name = copier->Name;
    Description = copier->Description;
    Price = copier->Price;
    Stock = copier->Stock;
    Status = copier->Status;
}
