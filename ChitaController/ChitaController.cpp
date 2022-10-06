#include "pch.h"

#include "ChitaController.h"

//---------------------------------------------------------------------------------------------------------------------
// PARA MANTENIMIENTO DE PETOWNER
//---------------------------------------------------------------------------------------------------------------------
int ChitaController::Controller::AddPetOwner(PetOwner^ PetOwner) {
	PetOwnerList->Add(PetOwner);
	return 1;
}
int ChitaController::Controller::UpdatePetOwner(PetOwner^ PetOwner) {
	for (int i = 0; i < PetOwnerList->Count; i++)
		if (PetOwner->Id == PetOwnerList[i]->Id) {
			PetOwnerList[i] = PetOwner;
			return 1;
		}
	return 0;
}
int ChitaController::Controller::DeletePetOwner(int PetOwnerId) {
	for (int i = 0; i < PetOwnerList->Count; i++)
		if (PetOwnerId == PetOwnerList[i]->Id) {
			PetOwnerList->RemoveAt(i);
			return 1;
		}
	return 0;
}
List<PetOwner^>^ ChitaController::Controller::QueryAllPetOwner() {
	List<PetOwner^>^ activePetOwnerList = gcnew List<PetOwner^>();
	for (int i = 0; i < PetOwnerList->Count; i++) {
		if (PetOwnerList[i]->Id > 0) {
			activePetOwnerList->Add(PetOwnerList[i]);
		}
	}
	return activePetOwnerList;
}
PetOwner^ ChitaController::Controller::QueryPetOwnerById(int PetOwnerId){
	for (int i = 0; i < PetOwnerList->Count; i++)
		if (PetOwnerId == PetOwnerList[i]->Id) {
			return PetOwnerList[i];
		}
	return nullptr;
}
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

//---------------------------------------------------------------------------------------------------------------------
// PARA MANTENIMIENTO DE PET
//---------------------------------------------------------------------------------------------------------------------
int ChitaController::Controller::AddPet(Pet^ pet)
{
    petList->Add(pet);  //agregar a la petList, el pet que entra al método
    return 0;
}

int ChitaController::Controller::UpdatePet(Pet^ pet)
{
    for (int i = 0; i < petList->Count; i++) { // de 0 a ++ mientras i sea menor al total de listas(count)
        if (pet->Id == petList[i]->Id) {    //Si atributo Id de Pet es igual al atributo Id de petList entonces...
            petList[i] = pet;   //Flag Done 
            return 1;
        }
    }
    return 0;
}

int ChitaController::Controller::DeletePet(int petId)
{
    for (int i = 0; i < petList->Count; i++) { // de 0 a ++ mientras i sea menor al total de listas(count)
        if (petId == petList[i]->Id) {    //Si petId entrante es igual al atributo Id de petList entonces...
            petList->RemoveAt(i);       //Borrar toda la celda perteneciente a dicho i (Id)
            return 1;   //Flag Done
        }
    }
    return 0;
}

Pet^ ChitaController::Controller::QueryPetById(int petId)
{
    for (int i = 0; i < petList->Count; i++) { //Barrido de todos los elementos de la lista
        if (petId == petList[i]->Id) {    //Si petId es igual al atributo Id de petList entonces...
            return petList[i];      //Retornamos la lista si encuentra una coincidencia
        }
    }
    return nullptr; //Si no encuentra una coincidenica, no debuelve algo.
}


List<Pet^>^ ChitaController::Controller::QueryAllPets()
{
    List<Pet^>^ activePetList = gcnew List<Pet^>(); //Reserva espacio de memoria para la lista
    for (int i = 0; i < petList->Count; i++) {  //Barrido de todos los elementos de la lista
        if (petList[i]-> Id > 0) {  
            activePetList->Add(petList[i]);
        }
    }
    return activePetList;
}
