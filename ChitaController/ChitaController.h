#pragma once

using namespace System;
using namespace ChitaModel;
using namespace System::Collections::Generic;

namespace ChitaController {
	public ref class Controller
	{
		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE CARER
		//---------------------------------------------------------------------------------------------------------------------

	private:
		static List <Carer^>^ carerList = gcnew List<Carer^>(); // Variable de clase o atributo estático
	public:
		static int AddCarer(Carer^ carer);                      // Añadir carer
		static int UpdateCarer(Carer^ carer);                   // Modificar carer
		static int DeleteCarer(int carerId);                    // Eliminar carer
		static List <Carer^>^ QueryAllCarers();                 // Consultar todos los Carers activos
		static Carer^ QueryCarerById(int carerId);              // Consultar Carer por ID

		//---------------------------------------------------------------------------------------------------------------------
		// PARA MANTENIMIENTO DE PET
		//---------------------------------------------------------------------------------------------------------------------
	
	private:	//privado para que otras clases no accedan a el.
		static List <Pet^>^ petList = gcnew List<Pet^>();	//como atributo para que viva mientras controller esté activo. static: Lista unica y global.

	public: //static es para que los metodos sean globales.
		static int AddPet(Pet^ pet);				//Método para añadir mascotas.
		static int UptadePet(Pet^ pet);				//Método para actualizar datos de las mascotas.
		static int DeletePet(int productId);		//Método para eliminar una mascota del registro.

		static Pet^ QueryPoductById(int petId);		//Método para mostrar una mascota por ID.
		static List <Pet^>^ QueryAllPets();			//Método para mostrar a todas las mascotas en una lista.

	};
}