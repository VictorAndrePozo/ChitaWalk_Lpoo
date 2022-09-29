#include "pch.h"

#include "ChitaController.h"


//---------------------------------------------------------------------------------------------------------------------
// PARA MANTENIMIENTO DE CARER
//---------------------------------------------------------------------------------------------------------------------
int ChitaController::Controller::AddCarer(Carer^ carer)
{
	carerList->Add(carer);
	return 1;
}

int ChitaController::Controller::UpdateCarer(Carer^ carer)
{
	for (int i = 0; i < carerList->Count; i++)
		if (carer->Id == carerList[i]->Id) {
			carerList[i] = carer;
			return 1;
		}
	return 0;
}

int ChitaController::Controller::DeleteCarer(int carerId)
{
	for (int i = 0; i < carerList->Count; i++)
		if (carerId == carerList[i]->Id) {
			carerList->RemoveAt(i);
			return 1;
		}
	return 0;
}

List<Carer^>^ ChitaController::Controller::QueryAllCarers()
{
	List<Carer^>^ activeCarersList = gcnew List<Carer^>();
	for (int i = 0; i < carerList->Count; i++) {
		if (carerList[i]->Status == 'A') {
			activeCarersList->Add(carerList[i]);
		}
	}
	return activeCarersList;
}

Carer^ ChitaController::Controller::QueryCarerById(int carerId)
{
	for (int i = 0; i < carerList->Count; i++)
		if (carerId == carerList[i]->Id) {
			return carerList[i];
		}
	return nullptr;
}