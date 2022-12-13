#include "pch.h"

#include "ChitaController.h"

using namespace System::Xml::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;


// -------------------------------------
// Coneccion
// ---------------------------------------
SqlConnection^ ChitaController::Controller::GetConnection()
{
	SqlConnection^ conn = gcnew SqlConnection();
	String^ connStr = "Server=200.16.7.140;Database=inf237m1;User ID=inf237m1;Password=s8aX3*R27{HK,4f:";
	conn->ConnectionString = connStr;
	conn->Open();
	return conn;
}

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
List<PetOwner^>^ ChitaController::Controller::QueryPetOwnerByName(String^ value)
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
	for (int i = 0; i < PetOwnerList->Count; i++) {
		if (dni == PetOwnerList[i]->DocNumbrer) {
			return PetOwnerList[i];
		}
	}
	return nullptr;
}

// DISCOUNT

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

//---------------------------------------------------------------------------------------------------------------------
// PARA TRANSACCION DE SERVICES REQUEST
//---------------------------------------------------------------------------------------------------------------------

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

List<ServiceRequest^>^ ChitaController::Controller::QueryServiceRequestByPetKind(String^ value)
{
	LoadServiceRequestData();
	List<ServiceRequest^>^ activeServiceRequestList = gcnew List<ServiceRequest^>(); //Reserva espacio de memoria para la lista
	for (int i = 0; i < servicerequestList->Count; i++) {  //Barrido de todos los elementos de la lista
		if (servicerequestList[i]->Kind->Contains(value)) {
			activeServiceRequestList->Add(servicerequestList[i]);
		}
	}
	return activeServiceRequestList;

}

List<ServiceRequest^>^ ChitaController::Controller::QueryServiceRequestByPet(String^ value)
{
	LoadServiceRequestData();
	List<ServiceRequest^>^ activeServiceRequestList = gcnew List<ServiceRequest^>(); //Reserva espacio de memoria para la lista
	for (int i = 0; i < servicerequestList->Count; i++) {  //Barrido de todos los elementos de la lista
		if (servicerequestList[i]->Pet->Contains(value)) {
			activeServiceRequestList->Add(servicerequestList[i]);
		}
	}
	return activeServiceRequestList;
}

List<ServiceRequest^>^ ChitaController::Controller::QueryServiceRequestByService(String^ value)
{
	LoadServiceRequestData();
	List<ServiceRequest^>^ activeServiceRequestList = gcnew List<ServiceRequest^>(); //Reserva espacio de memoria para la lista
	for (int i = 0; i < servicerequestList->Count; i++) {  //Barrido de todos los elementos de la lista
		if (servicerequestList[i]->Service->Contains(value)) {
			activeServiceRequestList->Add(servicerequestList[i]);
		}
	}
	return activeServiceRequestList;
}

List<ServiceRequest^>^ ChitaController::Controller::QueryServiceRequestByDistrict(String^ value)
{
	LoadServiceRequestData();
	List<ServiceRequest^>^ activeServiceRequestList = gcnew List<ServiceRequest^>(); //Reserva espacio de memoria para la lista
	for (int i = 0; i < servicerequestList->Count; i++) {  //Barrido de todos los elementos de la lista
		if (servicerequestList[i]->District->Contains(value)) {
			activeServiceRequestList->Add(servicerequestList[i]);
		}
	}
	return activeServiceRequestList;
}

List<ServiceRequest^>^ ChitaController::Controller::QueryServiceRequestByServiceDate(String^ value)
{
	LoadServiceRequestData();
	List<ServiceRequest^>^ activeServiceRequestList = gcnew List<ServiceRequest^>(); //Reserva espacio de memoria para la lista
	
	for (int i = 0; i < servicerequestList->Count; i++) {  //Barrido de todos los elementos de la lista
		if (servicerequestList[i]->DateService->Contains(value)) {
			activeServiceRequestList->Add(servicerequestList[i]);
		}
	}
	return activeServiceRequestList;
}

List<ServiceRequest^>^ ChitaController::Controller::QueryServiceRequestByDateTimeInit(String^ value)
{
	LoadServiceRequestData();
	List<ServiceRequest^>^ activeServiceRequestList = gcnew List<ServiceRequest^>(); //Reserva espacio de memoria para la lista
	for (int i = 0; i < servicerequestList->Count; i++) {  //Barrido de todos los elementos de la lista
		if (servicerequestList[i]->Pet->Contains(value)) {
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

int ChitaController::Controller::CreateTempServiceRequest(ServiceRequest^ servicerequest)
{
	servicerequestList->Add(servicerequest);  //agregar a la petList, el pet que entra al método
	PersistUnicTempServiceRequest();
	return 0;
}

int ChitaController::Controller::UpdateTempServiceRequest(ServiceRequest^ servicerequest)
{
	for (int i = 0; i < servicerequestList->Count; i++) { // de 0 a ++ mientras i sea menor al total de listas(count)
		if (servicerequest->Id == servicerequestList[i]->Id) {    //Si atributo Id de Pet es igual al atributo Id de petList entonces...
			servicerequestList[i] = servicerequest;   //Flag Done 
			PersistUnicTempServiceRequest();
			return 1;
		}
	}
	return 0;
}

int ChitaController::Controller::DeleteTempServiceRequest(int servicerequestId)
{
	for (int i = 0; i < servicerequestList->Count; i++) { // de 0 a ++ mientras i sea menor al total de listas(count)
		if (servicerequestId == servicerequestList[i]->Id) {    //Si petId entrante es igual al atributo Id de petList entonces...
			servicerequestList->RemoveAt(i);       //Borrar toda la celda perteneciente a dicho i (Id)
			PersistUnicTempServiceRequest();
			return 1;   //Flag Done
		}
	}
	return 0;
}

void ChitaController::Controller::PersistUnicTempServiceRequest()
{
	Stream^ stream = File::Open("ServiceRequestTemp.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, servicerequestList);
	stream->Close();
}

Void ChitaController::Controller::LoadUnicTempServiceRequestData()
{
	servicerequestList = gcnew List<ServiceRequest^>();
	//Lectura desde un archivo binario
	Stream^ sr = File::Open("ServiceRequestTemp.bin", FileMode::Open);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	servicerequestList = (List<ServiceRequest^>^)bFormatter->Deserialize(sr);

	sr->Close();
}

ServiceRequest^ ChitaController::Controller::QueryServiceRequestByStatus(String^ servicerequestStatus)
{
	for (int i = 0; i < servicerequestList->Count; i++) { //Barrido de todos los elementos de la lista
		if (servicerequestStatus == servicerequestList[i]->Status) {    //Si petId es igual al atributo Id de petList entonces...
			return servicerequestList[i];      //Retornamos la lista si encuentra una coincidencia
		}
	}
	return nullptr; //Si no encuentra una coincidenica, no debuelve algo.
}

List<ServiceRequest^>^ ChitaController::Controller::QueryTempServiceRequest()
{
	LoadUnicTempServiceRequestData();

	List<ServiceRequest^>^ activeServiceRequestList = gcnew List<ServiceRequest^>(); //Reserva espacio de memoria para la lista
	for (int i = 0; i < servicerequestList->Count; i++) {  //Barrido de todos los elementos de la lista
		if (servicerequestList[i]->Id>0) {
			activeServiceRequestList->Add(servicerequestList[i]);
		}
	}
	return activeServiceRequestList;
}

// -------------------------------------------------------------------------------------------
// MANTENIMIENTO PROMOTIONS
// -------------------------------------------------------------------------------------------

// Procedure
int ChitaController::Controller::AddPromotions(Promotions^ Promotions)
{
	/* PRIMERA OPCION
	PromotionList->Add(Promotions);
	PersistPromotions();
	return 1;*/

	//Paso 1: Se obtiene la conexión
	SqlConnection^ conn = GetConnection();

	//Paso 2: Se prepara la sentencia
	/*
	SqlCommand^ comm = gcnew SqlCommand("INSERT INTO PRODUCT(name, description, price, stock,status)"
		+ "VALUES('" + product->Name + "','" + product->Description + "',"
		+ product->Price + "," + product->Stock + ", 'A')", conn);
	*/
	String^ strCmd = "dbo.usp_AddPromotion";
	SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
	comm->CommandType = System::Data::CommandType::StoredProcedure;
	comm->Parameters->Add("@promotiontype", System::Data::SqlDbType::VarChar, 500);
	comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
	comm->Parameters->Add("@description", System::Data::SqlDbType::VarChar, 500);
	comm->Parameters->Add("@promotionvalue", System::Data::SqlDbType::Decimal, 10);
	comm->Parameters["@promotionvalue"]->Precision = 10;
	comm->Parameters["@promotionvalue"]->Scale = 2;
	comm->Parameters->Add("@deadline", System::Data::SqlDbType::Date);
	comm->Parameters->Add("@stock", System::Data::SqlDbType::Int);
	comm->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
	comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);

	SqlParameter^ outputIdParam = gcnew SqlParameter("@id", System::Data::SqlDbType::Int);
	outputIdParam->Direction = System::Data::ParameterDirection::Output;
	comm->Parameters->Add(outputIdParam);
	comm->Prepare();
	comm->Parameters["@promotiontype"]->Value = Promotions->PromotionType;
	comm->Parameters["@name"]->Value = Promotions->Name;
	comm->Parameters["@description"]->Value = Promotions->Description;
	comm->Parameters["@promotionvalue"]->Value = Promotions->PromotionValue;
	// DUDA
	comm->Parameters["@deadline"]->Value = Promotions->DeadLine;
	comm->Parameters["@stock"]->Value = Promotions->Stock;
	comm->Parameters["@status"]->Value = Char::ToString(Promotions->Status);
	if (Promotions->Photo == nullptr)
		comm->Parameters["@photo"]->Value = DBNull::Value;
	else
		comm->Parameters["@photo"]->Value = Promotions->Photo;

	//Paso 3: Se ejecuta la sentencia
	comm->ExecuteNonQuery();

	//Paso 4: Se procesan los resultados
	int output_id = Convert::ToInt32(comm->Parameters["@id"]->Value);

	//Paso 5: Se cierran los objetos de conexión
	conn->Close();

	return output_id;
}

// Procedure
int ChitaController::Controller::UpdatePromotions(Promotions^ Promotions)
{
	/* PRINCIPAL
	for (int i = 0; i < PromotionList->Count; i++)
		if (Promotions->Id == PromotionList[i]->Id) {
			PromotionList[i] = Promotions;
			PersistPromotions();
			return 1;
		}
	return 0;*/

	//Paso 1: Se obtiene la conexión
	SqlConnection^ conn = GetConnection();

	//Paso 2: Se prepara la sentencia
	/*
	SqlCommand^ comm = gcnew SqlCommand("UPDATE PRODUCT "
		+ "SET name = '" + product->Name + "', "
		+ "description = '" + product->Description + "', "
		+ "price = " + product->Price + ", "
		+ "stock = " + product->Stock + ", "
		+ "status = '" + Char::ToString(product->Status) + "' "
		//+ "photo = " + product->Photo
		+ " WHERE id = " + product->Id, conn);
	*/
	String^ strCmd = "dbo.usp_UpdatePromotion";
	SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
	comm->CommandType = System::Data::CommandType::StoredProcedure;
	comm->Parameters->Add("@id", System::Data::SqlDbType::Int);
	comm->Parameters->Add("@promotiontype", System::Data::SqlDbType::VarChar, 250);
	comm->Parameters->Add("@name", System::Data::SqlDbType::VarChar, 250);
	comm->Parameters->Add("@description", System::Data::SqlDbType::VarChar, 500);
	comm->Parameters->Add("@promotionvalue", System::Data::SqlDbType::Decimal, 10);
	comm->Parameters["@promotionvalue"]->Precision = 10;
	comm->Parameters["@promotionvalue"]->Scale = 2;
	comm->Parameters->Add("@stock", System::Data::SqlDbType::Int);
	comm->Parameters->Add("@status", System::Data::SqlDbType::Char, 1);
	comm->Parameters->Add("@photo", System::Data::SqlDbType::Image);
	comm->Prepare();
	comm->Parameters["@id"]->Value = Promotions->Id;
	comm->Parameters["@promotiontype"]->Value = Promotions->PromotionType;
	comm->Parameters["@name"]->Value = Promotions->Name;
	comm->Parameters["@description"]->Value = Promotions->Description;
	comm->Parameters["@promotionvalue"]->Value = Promotions->PromotionValue;
	comm->Parameters["@stock"]->Value = Promotions->Stock;
	comm->Parameters["@status"]->Value = Char::ToString(Promotions->Status);
	if (Promotions->Photo == nullptr)
		comm->Parameters["@photo"]->Value = DBNull::Value;
	else
		comm->Parameters["@photo"]->Value = Promotions->Photo;

	//Paso 3: Se ejecuta la sentencia
	int res = comm->ExecuteNonQuery();

	//Paso 4: Se procesan los resultados (No aplica)    

	//Paso 5: Se cierran los objetos de conexión
	conn->Close();

	return res;

}

// Procedure e Independiente
int ChitaController::Controller::DeletePromotions(int PromotionsId)
{
	/* PRINCIPAL
	for (int i = 0; i < PromotionList->Count; i++)
		if (PromotionsId == PromotionList[i]->Id) {
			PromotionList->RemoveAt(i);
			PersistPromotions();
			return 1;
		}
	return 0;*/

	//Paso 1: Se obtiene la conexión
	SqlConnection^ conn = GetConnection();

	//Paso 2: Se prepara la sentencia
	SqlCommand^ comm = gcnew SqlCommand("UPDATE PROMOTION "
		+ "SET status = 'I' "
		+ "WHERE id = " + PromotionsId, conn);

	//Paso 3: Se ejecuta la sentencia
	int res = comm->ExecuteNonQuery();

	//Paso 4: Se procesan los resultados (No aplica)    

	//Paso 5: Se cierran los objetos de conexión
	conn->Close();
	return res;

	// --------------------------------------------------------------------------------
	// EN CASO Haya PROCEDURE DELETE PROMOTION
	// --------------------------------------------------------------------------------

	/*
	// 1er paso: Se obtiene la conexión 
	SqlConnection^ conn = GetConnection();

	// 2do paso: Se prepara la sentencia 
	SqlCommand^ comm = gcnew SqlCommand();
	comm->Connection = conn;
	String^ strCmd;
	strCmd = "dbo.usp_DeletePromotion";
	comm = gcnew SqlCommand(strCmd, conn);
	comm->CommandType = System::Data::CommandType::StoredProcedure;
	comm->Parameters->Add("@iid", System::Data::SqlDbType::Int);

	comm->Prepare();
	comm->Parameters["@iid"]->Value = PromotionsId;

	// Paso 3: Se ejecuta la sentencia 
	comm->ExecuteNonQuery();

	// Paso 5: Cerramos la conexión con la BD 
	if (conn != nullptr) conn->Close();
	return 0; */

}

// Procedure e Independiente
List<Promotions^>^ ChitaController::Controller::QueryAllPromotions()
{
	/* PRINCIPAL
	LoadPromotionsData();
	List<Promotions^>^ activePromotionsList = gcnew List<Promotions^>();
	for (int i = 0; i < PromotionList->Count; i++) {
		if (PromotionList[i]->Status == 'A') {
			activePromotionsList->Add(PromotionList[i]);
		}
	}
	return activePromotionsList; */

	List<Promotions^>^ activePromotionsList = gcnew List<Promotions^>();
	//Paso 1: Se obtiene la conexión
	SqlConnection^ conn = GetConnection();

	//Paso 2: Se prepara la sentencia
	SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PROMOTION WHERE status='A'", conn);

	//Paso 3: Se ejecuta la sentencia
	SqlDataReader^ reader = comm->ExecuteReader();

	//Paso 4: Se procesan los resultados
	while (reader->Read()) {
		Promotions^ p = gcnew Promotions();
		p->Id = Convert::ToInt32(reader["id"]->ToString());
		p->PromotionType = reader["promotiontype"]->ToString();
		p->Name = reader["name"]->ToString();
		p->Description = reader["description"]->ToString();
		p->PromotionValue = Convert::ToDouble(reader["promotionvalue"]->ToString());

		DateTime^ sdate = safe_cast<DateTime^>(reader["deadline"]);
		p->DeadLine = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);

		p->Stock = Convert::ToInt32(reader["stock"]->ToString());

		if (!DBNull::Value->Equals(reader["status"]))
			p->Status = reader["status"]->ToString()[0];
		if (!DBNull::Value->Equals(reader["photo"]))
			p->Photo = (array<Byte>^)reader["photo"];
		activePromotionsList->Add(p);
	}

	//Paso 5: Se cierran los objetos de conexión
	if (reader != nullptr) reader->Close();
	if (conn != nullptr) conn->Close();

	return activePromotionsList;

	// ---------------------------------------------------------------------------
	// PROCEDURE
	// ---------------------------------------------------------------------------
	
	/*
	// Paso 1: Obtener la conexión 
	SqlConnection^ conn = GetConnection();

	// Paso 2: Preparar la sentencia
	SqlCommand^ comm = gcnew SqlCommand("usp_QueryAllPromotions", conn);
	comm->CommandType = System::Data::CommandType::StoredProcedure;

	SqlDataReader^ reader = comm->ExecuteReader();

	List<Promotions^>^ activePromotionsList = gcnew List<Promotions^>();
	// Paso 3: Se recorre los registros retornados 
	while (reader->Read()) {
		Promotions^ c = gcnew Promotions();
		c->Id = Int32::Parse(reader["id"]->ToString());
		c->PromotionType= reader["promotiontype"]->ToString();
		c->Name = reader["name"]->ToString();
		c->Description = reader["description"]->ToString();
		c->PromotionValue = Convert::ToDouble(reader["promotionvalue"]->ToString());
		DateTime^ sdate = safe_cast<DateTime^>(reader["deadline"]);
		c->DeadLine = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);

		c->Stock = Convert::ToInt32(reader["stock"]->ToString());

		if (!DBNull::Value->Equals(reader["status"]))
			c->Status = reader["status"]->ToString()[0];
		if (!DBNull::Value->Equals(reader["photo"]))
			c->Photo = (array<Byte>^)reader["photo"];

		activePromotionsList->Add(c);
	}

	// Paso 4 (CRÍTICO): Cerrar la conexión. 
	if (reader != nullptr) reader->Close();
	if (conn != nullptr) conn->Close();
	return activePromotionsList;*/
}

Promotions^ ChitaController::Controller::QueryPromotionsById(int PromotionsId)
{
	/* PRIMERO
	for (int i = 0; i < PromotionList->Count; i++)
		if (PromotionsId == PromotionList[i]->Id) {
			return PromotionList[i];
		}
	return nullptr;*/

	//Paso 1: Se obtiene la conexión
	SqlConnection^ conn = GetConnection();

	//Paso 2: Se prepara la sentencia
	SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PROMOTION WHERE status='A' AND id=" +
		PromotionsId, conn);

	//Paso 3: Se ejecuta la sentencia
	SqlDataReader^ reader = comm->ExecuteReader();

	//Paso 4: Se procesan los resultados
	Promotions^ p;
	if (reader->Read()) {
		p = gcnew Promotions();
		p->Id = Convert::ToInt32(reader["id"]->ToString());
		p->PromotionType = reader["promotiontype"]->ToString();
		p->Name = reader["name"]->ToString();
		p->Description = reader["description"]->ToString();
		p->PromotionValue = Convert::ToDouble(reader["promotionvalue"]->ToString());

		DateTime^ sdate = safe_cast<DateTime^>(reader["deadline"]);
		p->DeadLine = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);

		p->Stock = Convert::ToInt32(reader["stock"]->ToString());
		if (!DBNull::Value->Equals(reader["status"]))
			p->Status = reader["status"]->ToString()[0];
		if (!DBNull::Value->Equals(reader["photo"]))
			p->Photo = (array<Byte>^)reader["photo"];
	}


	//Paso 5: Se cierran los objetos de conexión
	if (reader != nullptr) reader->Close();
	if (conn != nullptr) conn->Close();
	return p;


	// -----------------------------------------------------------------------------------------------------
	// PROCEDURE
	// -----------------------------------------------------------------------------------------------------
	/*
	// 1er paso: Se obtiene la conexión 
	SqlConnection^ conn = GetConnection();

	// 2do paso: Se prepara la sentencia
	SqlCommand^ comm;

	comm = gcnew SqlCommand("usp_QueryPromotionsById", conn);
	comm->CommandType = System::Data::CommandType::StoredProcedure;
	comm->Parameters->Add("@iid", System::Data::SqlDbType::Int);
	comm->Prepare();
	comm->Parameters["@iid"]->Value = PromotionsId;

	// 3er paso: Se ejecuta la sentencia 
	SqlDataReader^ reader = comm->ExecuteReader();

	// 4to paso: Se procesan los resultados 
	Promotions^ s;
	if (reader->Read()) {

		s->PromotionType = reader["promotiontype"]->ToString();
		s->Name = reader["name"]->ToString();
		s->Description = reader["description"]->ToString();
		s->PromotionValue = Convert::ToDouble(reader["promotionvalue"]->ToString());

		DateTime^ sdate = safe_cast<DateTime^>(reader["deadline"]);
		s->DeadLine = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);

		s->Stock = Convert::ToInt32(reader["stock"]->ToString());
		if (!DBNull::Value->Equals(reader["status"]))
			s->Status = reader["status"]->ToString()[0];
		if (!DBNull::Value->Equals(reader["photo"]))
			s->Photo = (array<Byte>^)reader["photo"];
		
		//
		// Store^ st = gcnew Store();
		// st->Id = Int32::Parse(reader["store_id"]->ToString());
		// st->Name = reader["store_name"]->ToString();
		// st->Address = reader["store_address"]->ToString();
		// st->PostalCode = reader["store_postal_code"]->ToString();
		// s->Store = st;
		
	}

	// IMPORTANTE 5to paso: Cerramos la conexión con la BD 
	if (reader != nullptr) reader->Close();
	if (conn != nullptr) conn->Close();
	return s;*/
}

void ChitaController::Controller::PersistPromotions()
{
	Stream^ stream = File::Open("Promotions.bin", FileMode::Create);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	bFormatter->Serialize(stream, PromotionList);
	stream->Close();
}

void ChitaController::Controller::LoadPromotionsData()
{
	PromotionList = gcnew List<Promotions^>();
	//Lectura desde un archivo binario
	Stream^ sr = File::Open("Promotions.bin", FileMode::Open);
	BinaryFormatter^ bFormatter = gcnew BinaryFormatter();
	PromotionList = (List<Promotions^>^)bFormatter->Deserialize(sr);

	sr->Close();
}

List<Promotions^>^ ChitaController::Controller::QueryPromotionsByNameOrDescription(String^ value)
{
	/* PRIMERO
	LoadPromotionsData();
	List<Promotions^>^ newPromotionList = gcnew List<Promotions^>();
	for (int i = 0; i < PromotionList->Count; i++) {
		if (PromotionList[i]->Name->Contains(value) ||
			PromotionList[i]->Description->Contains(value))
			newPromotionList->Add(PromotionList[i]);
	}
	return newPromotionList;*/

	List<Promotions^>^ activePromotionsList = gcnew List<Promotions^>();
	//Paso 1: Se obtiene la conexión
	SqlConnection^ conn = GetConnection();

	//Paso 2: Se prepara la sentencia
	/*
	SqlCommand^ comm = gcnew SqlCommand("SELECT * FROM PROMOTION "
		+ "WHERE name LIKE '%"+ value + "%' OR "
		+ "description LIKE '%" + value + "%'", conn);
	*/
	String^ strCmd = "dbo.usp_QueryPromotionsByNameOrDesc";
	SqlCommand^ comm = gcnew SqlCommand(strCmd, conn);
	comm->CommandType = System::Data::CommandType::StoredProcedure;
	comm->Parameters->Add("@value", System::Data::SqlDbType::VarChar, 250);
	comm->Prepare();
	comm->Parameters["@value"]->Value = value;

	//Paso 3: Se ejecuta la sentencia
	SqlDataReader^ reader = comm->ExecuteReader();

	//Paso 4: Se procesan los resultados
	Promotions^ p;
	while (reader->Read()) {
		p = gcnew Promotions();
		p->Id = Convert::ToInt32(reader["id"]->ToString());
		p->PromotionType = reader["promotiontype"]->ToString();
		p->Name = reader["name"]->ToString();
		p->Description = reader["description"]->ToString();
		p->PromotionValue = Convert::ToDouble(reader["promotionvalue"]->ToString());

		DateTime^ sdate = safe_cast<DateTime^>(reader["deadline"]);
		p->DeadLine = sdate->ToString("dd/MM/yyyy", CultureInfo::InvariantCulture);

		p->Stock = Convert::ToInt32(reader["stock"]->ToString());
		if (!DBNull::Value->Equals(reader["status"]))
			p->Status = reader["status"]->ToString()[0];
		if (!DBNull::Value->Equals(reader["photo"]))
			p->Photo = (array<Byte>^)reader["photo"];
		activePromotionsList->Add(p);
	}

	//Paso 5: Se cierran los objetos de conexión
	reader->Close();
	conn->Close();
	return activePromotionsList;
}



