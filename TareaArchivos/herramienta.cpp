#include "herramienta.h"
#include <fstream>
#include <iostream>

using namespace std;

//void CrearArchivo() {
//	ofstream archivoOut("herramientas.dat", ios::out | ios::app | ios::binary);
//
//	herramienta enblanco;
//	enblanco.Codigo = -1;
//	strcpy(enblanco.Nombre, " ");
//	enblanco.Cantidad = -1;
//	enblanco.Precio = -1;
//
//	for (int i = 0; i < 100; i++) {
//
//		archivoOut.write(reinterpret_cast<const char *>(&enblanco), sizeof(herramienta));
//
//
//	}
//
//}
//
//void consultarHerramientas()
//{
//	int cr = 0;
//	ifstream archivoIn("herramientas.dat", ios::in | ios::binary);
//
//	if (!archivoIn) {
//
//
//		cout << "Error al intentar abrir el archivo";
//		return;
//	}
//	archivoIn.seekg(0, ios::beg);
//	cout << "\n\n *** C O N S U L T A  D E  H E R R A M I E N T A S *** \n\n ";
//	herramienta actual;
//
//	archivoIn.read(reinterpret_cast< char *>(&actual), sizeof(herramienta));
//	while (!archivoIn.eof())
//	{
//
//		cout << "Codigo: " << actual.Codigo << "\nNombre:" << actual.Nombre << "\nCantidad: " << actual.Cantidad << "\nPrecio: " << actual.Precio << endl;
//		cout << "----------------------\n";
//		if (actual.Codigo != -1) {
//
//
//		}
//		archivoIn.read(reinterpret_cast<char *>(&actual), sizeof(herramienta));
//	}
//	archivoIn.close();
//}
//
//
//
//
//
//
//
//
//void BuscarHerramienta(int codigo)
//{
//	bool bandera = false;
//	int contador = 0;
//	int opcion = 0;
//	int nuevCodigo;
//	int nuevCantidad;
//	float nuevPrecio;
//	char nombre[30];
//	fstream archivo("herramientas.dat", ios::in | ios::out | ios::binary);
//	if (!archivo) {
//
//
//		cout << "Error";
//		return;
//	}
//	archivo.seekp(0, ios::beg);
//	herramienta actual;
//	herramienta nueva;
//
//	archivo.read(reinterpret_cast< char *>(&actual), sizeof(herramienta));
//	while (!archivo.eof()) {
//		if (actual.Codigo != codigo) {
//
//			contador = contador + 1;
//		}
//		else {
//
//			archivo.seekp(contador * sizeof(herramienta), ios::beg);
//
//
//
//			cout << "Nombre: " << actual.Nombre << "\nCodigo :" << actual.Codigo << "\nPrecio: " << actual.Precio << "\nCantidad" << actual.Cantidad << endl;
//
//
//			break;
//			archivo.read(reinterpret_cast<char *>(&actual), sizeof(herramienta));
//		}
//	}
//
//}
//
//int cantidadDeRegistrosAgregados() {
//
//	int cr = 0;
//	ifstream archivoIn("herramientas.dat", ios::in | ios::binary);
//
//	if (!archivoIn) {
//
//
//		cout << "Error al intentar abrir el archivo";
//
//	}
//	archivoIn.seekg(0, ios::beg);
//	//cout << "\n\n *** C O N S U L T A  D E  H E R R A M I E N T A S *** \n\n ";
//	herramienta actual;
//
//	archivoIn.read(reinterpret_cast< char *>(&actual), sizeof(herramienta));
//	while (!archivoIn.eof())
//	{
//
//		//cout << "Codigo: " << actual.Codigo << "\nNombre:" << actual.Nombre << "\nCantidad: " << actual.Cantidad << "\nPrecio: " << actual.Precio << endl;
//		//cout << "----------------------\n";
//		if (actual.Codigo != -1) {
//			cr = cr + 1;
//
//		}
//
//		archivoIn.read(reinterpret_cast<char *>(&actual), sizeof(herramienta));
//	}
//	archivoIn.close();
//	return cr;
//
//
//
//
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//int CantidadDeRegistros() {
//	ifstream archivo("herramientas.dat", ios::in | ios::binary);
//
//
//
//	archivo.seekg(0, ios::end);
//
//	int bytestotales = archivo.tellg();
//
//	int cantidad = bytestotales / sizeof(herramienta);
//
//
//	return cantidad;
//
//
//
//}
//
//
//
//
//
//
//
//void InsertarHerramienta(int pos)
//{
//
//	int contador = 0;
//	int opcion = 0;
//	int nuevCodigo;
//	int nuevCantidad;
//	float nuevPrecio;
//	char nombre[30];
//	fstream archivo("herramientas.dat", ios::in | ios::out | ios::binary);
//	if (!archivo)
//	{
//
//
//		cout << "Error";
//		return;
//	}
//
//	herramienta actual;
//	herramienta nueva;
//
//	archivo.read(reinterpret_cast< char *>(&actual), sizeof(herramienta));
//
//	archivo.seekp((pos - 1) * sizeof(herramienta), ios::beg);
//
//	cout << "Ingrese nombre: " << endl;
//	cin >> nombre;
//	cout << "Ingrese codigo: " << endl;
//	cin >> nuevCodigo;
//	cout << "Ingrese precio: " << endl;
//	cin >> nuevPrecio;
//	cout << "Ingrese cantidad: " << endl;
//	cin >> nuevCantidad;
//
//	actual.Cantidad = nuevCantidad;
//	actual.Codigo = nuevCodigo;
//	actual.Precio = nuevPrecio;
//	strcpy_s(actual.Nombre, nombre);
//
//
//
//
//	archivo.write(reinterpret_cast<const char *>(&actual), sizeof(herramienta));
//
//	cout << "Se a agregado el nuevo elemento" << endl;
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//void EliminarHerramienta(int codigo) {
//
//	int contador = 0;
//	int opcion = 0;
//	int nuevCodigo;
//	int nuevCantidad;
//	float nuevPrecio;
//	char nombre[30];
//	fstream archivo("herramientas.dat", ios::in | ios::out | ios::binary);
//	if (!archivo) {
//
//
//		cout << "Error";
//		return;
//	}
//	archivo.seekp(0, ios::beg);
//	herramienta actual;
//	herramienta nueva;
//
//	archivo.read(reinterpret_cast< char *>(&actual), sizeof(herramienta));
//	while (!archivo.eof()) {
//		if (actual.Codigo != codigo) {
//
//			contador = contador + 1;
//		}
//		else {
//
//			archivo.seekp(contador * sizeof(herramienta), ios::beg);
//
//
//
//			actual.Codigo = -1;
//			strcpy_s(actual.Nombre, " ");
//			actual.Cantidad = -1;
//			actual.Precio = -1;
//
//
//
//
//			archivo.write(reinterpret_cast<const char *>(&actual), sizeof(herramienta));
//
//		}
//
//	}
//
//
//}
//
//void RegistrarHerramienta()
//{
//	int opcion = 0;
//	int nuevCodigo;
//	int nuevCantidad;
//	float nuevPrecio;
//	char nombre[30];
//	fstream archivo("herramientas.dat", ios::in | ios::out | ios::binary);
//	if (!archivo) {
//
//
//		cout << "Error";
//		return;
//	}
//	archivo.seekp(cantidadDeRegistrosAgregados() * sizeof(herramienta), ios::beg);
//	herramienta actual;
//	herramienta nueva;
//
//
//	do {
//
//		cout << "Ingrese nombre: " << endl;
//		cin >> nombre;
//		cout << "Ingrese codigo: " << endl;
//		cin >> nuevCodigo;
//		cout << "Ingrese precio: " << endl;
//		cin >> nuevPrecio;
//		cout << "Ingrese cantidad: " << endl;
//		cin >> nuevCantidad;
//
//		actual.Cantidad = nuevCantidad;
//		actual.Codigo = nuevCodigo;
//		actual.Precio = nuevPrecio;
//		strcpy_s(actual.Nombre, nombre);
//
//
//
//
//		archivo.write(reinterpret_cast<const char *>(&actual), sizeof(herramienta));
//		cout << "Registro guardad!\n\n";
//
//		cout << "Desea agregar un nuevo registro (-1 para salir):";
//
//		cin >> opcion;
//
//	} while (opcion != -1);
//
//}