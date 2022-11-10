#pragma once
//#include "../ChitaModel/PetOwner.cpp"
//#include "../ChitaModel/Discount.cpp"

using namespace System;
using namespace ChitaModel;
using namespace System::Collections::Generic;
using namespace System::IO;


namespace ChitaController {
	public ref class Controller
	{

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE PETOWNER
		//---------------------------------------------------------------------------------------------------------------------
	private:
		static List <PetOwner^>^ PetOwnerList = gcnew List<PetOwner^>(); //lista de PetOwners
	public:
		static int AddPetOwner(PetOwner^ PetOwner); //anadir petowner
		static int UpdatePetOwner(PetOwner^ PetOwner);                   // Modificar petowner
		static int DeletePetOwner(int PetOwnerId);                    // Eliminar petowner
		static List <PetOwner^>^ QueryAllPetOwner();                 // Consultar todos los petowner activos
		static PetOwner^ QueryPetOwnerById(int PetOwnerId);              // Consultar petowner por ID
		static void PersistPetOwner();	
		static void LoadPetOwnerData();

		// Descuentos
		static List<PetOwner^>^ QueryPetOwnerByName(String^);
		static PetOwner^ QueryPetOwnerByDNI(String^ dni);

		//Registro de descuento
		private:
			static List <Discount^>^ DiscountList = gcnew List<Discount^>(); //lista de Discounts
		public:
		static void RegisterDiscount(Discount^ discount);
		static int QueryLastDiscountId();
		static List<Discount^>^ QueryAllDiscounts();
		static void PersistDiscounts();
		static void LoadDiscountsData();

		//Método CRUD para las promociones
		//private:
		//	static List <Promotions^>^ PromotionsList = gcnew List<Promotions^>(); // Variable de clase o atributo estático
		//public:
		//static int AddPromotions(Promotions^ Promotions);                      
		//static int UpdatePromotions(Promotions^ Promotions);                   
		//static int DeletePromotions(int PromotionsId);                    
		//static List <Promotions^>^ QueryAllPromotions();                 
		//static Promotions^ QueryPromotionsById(int PromotionsId);              
		//static void PersistPromotions();
		//static void LoadPromotionsData();

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE KEEPER
		//---------------------------------------------------------------------------------------------------------------------

	private:
		static List <Keeper^>^ keeperList = gcnew List<Keeper^>(); // Variable de clase o atributo estático
	public:
		static int AddKeeper(Keeper^ keeper);                      // Añadir carer
		static int UpdateKeeper(Keeper^ keeper);                   // Modificar carer
		static int DeleteKeeper(int keeperId);                    // Eliminar carer
		static List <Keeper^>^ QueryAllKeepers();                 // Consultar todos los Carers activos
		static Keeper^ QueryKeeperById(int keeperId);              // Consultar Carer por ID
		static void PersistKeepers();
		static void LoadKeepersData();

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE WALKER
		//---------------------------------------------------------------------------------------------------------------------

	private:
		static List <Walker^>^ walkerList = gcnew List<Walker^>(); // Variable de clase o atributo estático
	public:
		static int AddWalker(Walker^ walker);                      // Añadir carer
		static int UpdateWalker(Walker^ walker);                   // Modificar carer
		static int DeleteWalker(int walkerId);                    // Eliminar carer
		static List <Walker^>^ QueryAllWalkers();                 // Consultar todos los Carers activos
		static Walker^ QueryWalkerById(int walkerId);              // Consultar Carer por ID
		static void PersistWalkers();
		static void LoadWalkersData();



		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE PET
		//---------------------------------------------------------------------------------------------------------------------
	
	private:	//privado para que otras clases no accedan a el.
		static List <Pet^>^ petList = gcnew List<Pet^>();	//como atributo para que viva mientras controller esté activo. static: Lista unica y global.

	public: //static es para que los metodos sean globales.
		static int AddPet(Pet^ pet);				//Método para añadir mascotas.
		static int UpdatePet(Pet^ pet);				//Método para actualizar datos de las mascotas.
		static int DeletePet(int petId);		//Método para eliminar una mascota del registro.

		static Pet^ QueryPetById(int petId);		//Método para mostrar una mascota por ID.
		static List <Pet^>^ QueryAllPets();			//Método para mostrar a todas las mascotas en una lista.

		static void PersistPets();

		static Void LoadPetsData();

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE SERVICE REQUEST
		//---------------------------------------------------------------------------------------------------------------------

	private:	//privado para que otras clases no accedan a el.
		static List <ServiceRequest^>^ servicerequestList = gcnew List<ServiceRequest^>();	//como atributo para que viva mientras controller esté activo. static: Lista unica y global.

	public: //static es para que los metodos sean globales.
		static int AddServiceRequest(ServiceRequest^ servicerequest);				//Método para añadir mascotas.
		static int UpdateServiceRequest(ServiceRequest^ servicerequest);				//Método para actualizar datos de las mascotas.
		static int DeleteServiceRequest(int servicerequestId);		//Método para eliminar una mascota del registro.

		static ServiceRequest^ QueryServiceRequestById(int servicerequestId);		//Método para mostrar una mascota por ID.
		
		static List <ServiceRequest^>^ QueryAllServiceRequest();			//Método para mostrar a todas las mascotas en una lista.
		static List <ServiceRequest^>^ QueryServiceRequestByPetKind(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByPet(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByService(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByDistrict(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByServiceDate(String^);
		static List <ServiceRequest^>^ QueryServiceRequestByDateTimeInit(String^);

		static void PersistServiceRequest();

		static Void LoadServiceRequestData();

	};
}