#include "pch.h"
#include "Promotions.h"

ChitaModel::Promotions::Promotions(const Promotions^& copier)
{
    Id = copier->Id;
    PromotionType = copier->PromotionType;
    Name = copier->Name;
    Description = copier->Description;
    PromotionValue = copier->PromotionValue;
    Stock = copier->Stock;
    DeadLine = copier->DeadLine;
    Status = copier->Status;
    Photo = copier->Photo;

}
