#include "pch.h"

#include "ChitaController.h"

using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace System::Xml::Serialization;

//---------------------------------------------------------------------------------------------------------------------
// PARA MANTENIMIENTO DE PETOWNER
//---------------------------------------------------------------------------------------------------------------------
void ChitaController::Controller::PersistPetOwner() {
	Stream^ stream = File::Open("PetOwners.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, PetOwnerList);
	stream->Close();
}
int ChitaController::Controller::AddPetOwner(PetOwner^ PetOwner) {
	PetOwnerList->Add(PetOwner);
	PersistPetOwner();
	return 1;
}
int ChitaController::Controller::UpdatePetOwner(PetOwner^ PetOwner) {
	for (int i = 0; i < PetOwnerList->Count; i++)
		if (PetOwner->Id == PetOwnerList[i]->Id) {
			PetOwnerList[i] = PetOwner;
			PersistPetOwner();
			return 1;
		}
	return 0;
}
int ChitaController::Controller::DeletePetOwner(int PetOwnerId) {
	for (int i = 0; i < PetOwnerList->Count; i++)
		if (PetOwnerId == PetOwnerList[i]->Id) {
			PetOwnerList->RemoveAt(i);
			PersistPetOwner();
			return 1;
		}
	return 0;
}
void ChitaController::Controller::LoadPetOwnerData() {
	//Lectura desde un archivo binario
	Stream^ sr = nullptr;
	try {
		sr = File::Open("PetOwners.bin", FileMode::Open);
		BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
		PetOwnerList = (List<PetOwner^>^)bFormatter->Deserialize(sr);
	}
	catch (FileNotFoundException^ ex) {
	}
	catch (Exception^ ex) {
	}
	finally {
		if (sr != nullptr) sr->Close();
	}
}
List<PetOwner^>^ ChitaController::Controller::QueryPetOwnerByName(String^)
{
	LoadPetOwnerData();
	List<PetOwner^>^ newPetOwnerList = gcnew List<PetOwner^>();
	for (int i = 0; i < PetOwnerList->Count; i++) {
		if (PetOwnerList[i]->Lastname->Contains(value) ||
			PetOwnerList[i]->Firstname->Contains(value))
			newPetOwnerList->Add(PetOwnerList[i]);
	}
	return newPetOwnerList;
}
PetOwner^ ChitaController::Controller::QueryPetOwnerByDNI(String^ dni)
{
	LoadPetOwnerData();
	for (int i = 0; i < PetOwnerList->Count; i++)
		if (dni == PetOwnerList[i]->DocNumbrer) {
			return PetOwnerList[i];
		}
	return nullptr;
}

void ChitaController::Controller::RegisterDiscount(Discount^ discount)
{
	DiscountList->Add(discount);
	PersistDiscounts();
}

int ChitaController::Controller::QueryLastDiscountId()
{
	LoadDiscountsData();
	int lastDiscountId = 0;
	for (int i = 0; i < DiscountList->Count; i++) {
		if (DiscountList[i]->Id > lastDiscountId)
			lastDiscountId = DiscountList[i]->Id;
	}
	return lastDiscountId;
}

List<Discount^>^ ChitaController::Controller::QueryAllDiscounts()
{
	LoadDiscountsData();
	return DiscountList;
}

void ChitaController::Controller::PersistDiscounts()
{
	//En formato de archivo binario
	Stream^ stream = File::Open("Discounts.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, DiscountList);
	stream->Close();
}

void ChitaController::Controller::LoadDiscountsData()
{
	DiscountList = gcnew List<Discount^>();
	//Lectura desde un archivo binario
	Stream^ sr = nullptr;

	sr = File::Open("Discounts.bin", FileMode::Open);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	DiscountList = (List<Discount^>^)bFormatter->Deserialize(sr);
}

List<PetOwner^>^ ChitaController::Controller::QueryAllPetOwner() {

	LoadPetOwnerData();

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
// PARA MANTENIMIENTO DE KEEPER
//---------------------------------------------------------------------------------------------------------------------

int ChitaController::Controller::AddKeeper(Keeper^ keeper)
{
	keeperList->Add(keeper);
	PersistKeepers();
	return 1;
}

int ChitaController::Controller::UpdateKeeper(Keeper^ keeper)
{
	for (int i = 0; i < keeperList->Count; i++)
		if (keeper->Id == keeperList[i]->Id) {
			keeperList[i] = keeper;
			PersistKeepers();
			return 1;
		}
	return 0;
}

int ChitaController::Controller::DeleteKeeper(int keeperId)
{
	for (int i = 0; i < keeperList->Count; i++)
		if (keeperId == keeperList[i]->Id) {
			keeperList->RemoveAt(i);
			PersistKeepers();
			return 1;
		}
	return 0;
}

List<Keeper^>^ ChitaController::Controller::QueryAllKeepers()
{
	LoadKeepersData();
	List<Keeper^>^ activeKeepersList = gcnew List<Keeper^>();
	for (int i = 0; i < keeperList->Count; i++) {
		if (keeperList[i]->Status == 'A') {
			activeKeepersList->Add(keeperList[i]);
		}
	}
	return activeKeepersList;
}

Keeper^ ChitaController::Controller::QueryKeeperById(int keeperId)
{
	for (int i = 0; i < keeperList->Count; i++)
		if (keeperId == keeperList[i]->Id) {
			return keeperList[i];
		}
	return nullptr;
}

void ChitaController::Controller::PersistKeepers()
{

	//En formato de archivo binario
	Stream^ stream = File::Open("Keepers.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, keeperList);
	stream->Close();
}

void ChitaController::Controller::LoadKeepersData()
{

	keeperList = gcnew List<Keeper^>();
	//Lectura desde un archivo binario
	Stream^ sr = File::Open("Keepers.bin", FileMode::Open);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	keeperList = (List<Keeper^>^)bFormatter->Deserialize(sr);

	sr->Close();
}

//---------------------------------------------------------------------------------------------------------------------
// PARA MANTENIMIENTO DE PET
//---------------------------------------------------------------------------------------------------------------------

void ChitaController::Controller::PersistPets() {
	Stream^ stream = File::Open("Pets.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, petList);
	stream->Close();
}


int ChitaController::Controller::AddPet(Pet^ pet)
{
    petList->Add(pet);  //agregar a la petList, el pet que entra al método
	PersistPets();
    return 0;
}

int ChitaController::Controller::UpdatePet(Pet^ pet)
{
    for (int i = 0; i < petList->Count; i++) { // de 0 a ++ mientras i sea menor al total de listas(count)
        if (pet->Id == petList[i]->Id) {    //Si atributo Id de Pet es igual al atributo Id de petList entonces...
            petList[i] = pet;   //Flag Done 
			PersistPets();
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
			PersistPets();
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
	LoadPetsData();

    List<Pet^>^ activePetList = gcnew List<Pet^>(); //Reserva espacio de memoria para la lista
    for (int i = 0; i < petList->Count; i++) {  //Barrido de todos los elementos de la lista
        if (petList[i]-> Id > 0) {  
            activePetList->Add(petList[i]);
        }
    }
    return activePetList;
}


void ChitaController::Controller::LoadPetsData() {

	petList = gcnew List<Pet^>();
	//Lectura desde un archivo binario
	Stream^ sr = File::Open("Pets.bin", FileMode::Open);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	petList = (List<Pet^>^)bFormatter->Deserialize(sr);

	sr->Close();
}

//---------------------------------------------------------------------------------------------------------------------
// PARA MANTENIMIENTO DE WALKER
//---------------------------------------------------------------------------------------------------------------------


int ChitaController::Controller::AddWalker(Walker^ walker)
{
	walkerList->Add(walker);
	return 1;
}

int ChitaController::Controller::UpdateWalker(Walker^ walker)
{
	for (int i = 0; i < walkerList->Count; i++)
		if (walker->Id == walkerList[i]->Id) {
			walkerList[i] = walker;
			return 1;
		}
	return 0;
}

int ChitaController::Controller::DeleteWalker(int walkerId)
{
	for (int i = 0; i < walkerList->Count; i++)
		if (walkerId == walkerList[i]->Id) {
			walkerList->RemoveAt(i);
			return 1;
		}
	return 0;
}

List<Walker^>^ ChitaController::Controller::QueryAllWalkers()
{
	List<Walker^>^ activeWalkersList = gcnew List<Walker^>();
	for (int i = 0; i < walkerList->Count; i++) {
		if (walkerList[i]->Status == 'A') {
			activeWalkersList->Add(walkerList[i]);
		}
	}
	return activeWalkersList;
}

Walker^ ChitaController::Controller::QueryWalkerById(int walkerId)
{
	for (int i = 0; i < walkerList->Count; i++)
		if (walkerId == walkerList[i]->Id) {
			return walkerList[i];
		}
	return nullptr;
}

void ChitaController::Controller::PersistWalkers()
{

	//En formato de archivo binario
	Stream^ stream = File::Open("Walkers.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, walkerList);
	stream->Close();
}

void ChitaController::Controller::LoadWalkersData()
{

	walkerList = gcnew List<Walker^>();
	//Lectura desde un archivo binario
	Stream^ sr = File::Open("Walkers.bin", FileMode::Open);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	walkerList = (List<Walker^>^)bFormatter->Deserialize(sr);

	sr->Close();
}

//---------------------------------------------------------------------------------------------------------------------
// PARA MANTENIMIENTO DE SERVICES REQUEST
//---------------------------------------------------------------------------------------------------------------------

void ChitaController::Controller::PersistServiceRequest() {
	Stream^ stream = File::Open("ServiceRequest.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, servicerequestList);
	stream->Close();
}


int ChitaController::Controller::AddServiceRequest(ServiceRequest^ servicerequest)
{
	servicerequestList->Add(servicerequest);  //agregar a la petList, el pet que entra al método
	PersistServiceRequest();
	return 0;
}

int ChitaController::Controller::UpdateServiceRequest(ServiceRequest^ servicerequest)
{
	for (int i = 0; i < servicerequestList->Count; i++) { // de 0 a ++ mientras i sea menor al total de listas(count)
		if (servicerequest->Id == servicerequestList[i]->Id) {    //Si atributo Id de Pet es igual al atributo Id de petList entonces...
			servicerequestList[i] = servicerequest;   //Flag Done 
			PersistServiceRequest();
			return 1;
		}
	}
	return 0;
}

int ChitaController::Controller::DeleteServiceRequest(int servicerequestId)
{
	for (int i = 0; i < servicerequestList->Count; i++) { // de 0 a ++ mientras i sea menor al total de listas(count)
		if (servicerequestId == servicerequestList[i]->Id) {    //Si petId entrante es igual al atributo Id de petList entonces...
			servicerequestList->RemoveAt(i);       //Borrar toda la celda perteneciente a dicho i (Id)
			PersistServiceRequest();
			return 1;   //Flag Done
		}
	}
	return 0;
}

ServiceRequest^ ChitaController::Controller::QueryServiceRequestById(int servicerequestId)
{
	for (int i = 0; i < servicerequestList->Count; i++) { //Barrido de todos los elementos de la lista
		if (servicerequestId == servicerequestList[i]->Id) {    //Si petId es igual al atributo Id de petList entonces...
			return servicerequestList[i];      //Retornamos la lista si encuentra una coincidencia
		}
	}
	return nullptr; //Si no encuentra una coincidenica, no debuelve algo.
}


List<ServiceRequest^>^ ChitaController::Controller::QueryAllServiceRequest()
{
	LoadServiceRequestData();

	List<ServiceRequest^>^ activeServiceRequestList = gcnew List<ServiceRequest^>(); //Reserva espacio de memoria para la lista
	for (int i = 0; i < servicerequestList->Count; i++) {  //Barrido de todos los elementos de la lista
		if (servicerequestList[i]->Id > 0) {
			activeServiceRequestList->Add(servicerequestList[i]);
		}
	}
	return activeServiceRequestList;
}


void ChitaController::Controller::LoadServiceRequestData() {

	servicerequestList = gcnew List<ServiceRequest^>();
	//Lectura desde un archivo binario
	Stream^ sr = File::Open("ServiceRequest.bin", FileMode::Open);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	servicerequestList = (List<ServiceRequest^>^)bFormatter->Deserialize(sr);

	sr->Close();
}
