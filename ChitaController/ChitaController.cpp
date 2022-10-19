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
int ChitaController::Controller::AddPet(Pet^ pet)
{
    petList->Add(pet);  //agregar a la petList, el pet que entra al método
	PersistPetOwner();
    return 0;
}

int ChitaController::Controller::UpdatePet(Pet^ pet)
{
    for (int i = 0; i < petList->Count; i++) { // de 0 a ++ mientras i sea menor al total de listas(count)
        if (pet->Id == petList[i]->Id) {    //Si atributo Id de Pet es igual al atributo Id de petList entonces...
            petList[i] = pet;   //Flag Done 
			PersistPetOwner();
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
			PersistPetOwner();
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

void ChitaController::Controller::PersistPets() {
	XmlSerializer^ writer = gcnew XmlSerializer(petList->GetType());
	StreamWriter^ sw = gcnew StreamWriter("Pets.xml");
	writer->Serialize(sw, petList);
	sw->Close();
}


Void ChitaController::Controller::LoadPetsData() {	//Método de lectura de valores de .txt
	petList = gcnew List<Pet^>();					//Creamos una nueva lista 
	XmlSerializer^ reader = gcnew XmlSerializer(petList->GetType());
	StreamReader^ sr = gcnew StreamReader("Pets.xml");
	petList = (List<Pet^>^)reader->Deserialize(sr);
	sr->Close();
}
