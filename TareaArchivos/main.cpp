
#include <iostream>
#include <fstream>
#include <iostream>
#include <conio.h>

using namespace std;

struct herramienta {
	int Creg;
	int Codigo;
	char Nombre[30];
	int Cantidad;
	float Precio;
};

	int main() {
		CrearArchivo();

		_getch();
	}

	void CrearArchivo() {
		ofstream archivoOut("herramientas.dat", ios::out | ios::app | ios::binary);

		herramienta blanco;

		blanco.Codigo = -1;
		strcpy(blanco.Nombre, " ");
		blanco.Cantidad = -1;
		blanco.Precio = -1;

		for (int i = 0; i < 100; i++) {

			archivoOut.write(reinterpret_cast<const char *>(&blanco), sizeof(herramienta));


		}

	}

	void consultarHerramientas()
	{
		int cr = 0;
		ifstream archivoIn("herramientas.dat", ios::in | ios::binary);

		if (!archivoIn) {


			cout << "Error al intentar abrir el archivo";
			return;
		}
		archivoIn.seekg(0, ios::beg);
		cout << "\n\n *** C O N S U L T A  D E  H E R R A M I E N T A S *** \n\n ";
		herramienta act;

		archivoIn.read(reinterpret_cast<char *>(&act), sizeof(herramienta));
		while (!archivoIn.eof())
		{

			cout << "Codigo: " << act.Codigo << "\nNombre:" << act.Nombre << "\nCantidad: " << act.Cantidad << "\nPrecio: " << act.Precio << endl;
			cout << "----------------------\n";
			if (act.Codigo != -1) {


			}
			archivoIn.read(reinterpret_cast<char *>(&act), sizeof(herramienta));
		}
		archivoIn.close();
	}

	void BuscarHerramienta(int codigo)
	{
		bool bandera = false;
		int contador = 0;
		int opcion = 0;
		int nuevCodigo;
		int nuevCantidad;
		float nuevPrecio;
		char nombre[30];
		fstream archivo("herramientas.dat", ios::in | ios::out | ios::binary);
		if (!archivo) {


			cout << "Error";
			return;
		}
		archivo.seekp(0, ios::beg);
		herramienta act;
		herramienta nueva;

		archivo.read(reinterpret_cast<char *>(&act), sizeof(herramienta));
		while (!archivo.eof()) {
			if (act.Codigo != codigo) {

				contador = contador + 1;
			}
			else {

				archivo.seekp(contador * sizeof(herramienta), ios::beg);



				cout << "Nombre: " << act.Nombre << "\nCodigo :" << act.Codigo << "\nPrecio: " << act.Precio << "\nCantidad" << act.Cantidad << endl;


				break;
				archivo.read(reinterpret_cast<char *>(&act), sizeof(herramienta));
			}
		}

	}

	int cantidadDeRegistrosAgregados() {

		int cr = 0;
		ifstream archivoIn("herramientas.dat", ios::in | ios::binary);

		if (!archivoIn) {


			cout << "Error al intentar abrir el archivo";

		}
		archivoIn.seekg(0, ios::beg);
		//cout << "\n\n *** C O N S U L T A  D E  H E R R A M I E N T A S *** \n\n ";
		herramienta act;

		archivoIn.read(reinterpret_cast<char *>(&act), sizeof(herramienta));
		while (!archivoIn.eof())
		{

			//cout << "Codigo: " << act.Codigo << "\nNombre:" << act.Nombre << "\nCantidad: " << act.Cantidad << "\nPrecio: " << act.Precio << endl;
			//cout << "----------------------\n";
			if (act.Codigo != -1) {
				cr = cr + 1;

			}

			archivoIn.read(reinterpret_cast<char *>(&act), sizeof(herramienta));
		}
		archivoIn.close();
		return cr;




	}


	int CantidadDeRegistros() {
		ifstream archivo("herramientas.dat", ios::in | ios::binary);



		archivo.seekg(0, ios::end);

		int bytestotales = archivo.tellg();

		int cantidad = bytestotales / sizeof(herramienta);


		return cantidad;



	}

	void InsertarHerramienta(int pos)
	{

		int contador = 0;
		int opcion = 0;
		int nuevCodigo;
		int nuevCantidad;
		float nuevPrecio;
		char nombre[30];
		fstream archivo("herramientas.dat", ios::in | ios::out | ios::binary);
		if (!archivo)
		{


			cout << "Error";
			return;
		}

		herramienta act;
		herramienta nueva;

		archivo.read(reinterpret_cast<char *>(&act), sizeof(herramienta));

		archivo.seekp((pos - 1) * sizeof(herramienta), ios::beg);

		cout << "Ingrese nombre: " << endl;
		cin >> nombre;
		cout << "Ingrese codigo: " << endl;
		cin >> nuevCodigo;
		cout << "Ingrese precio: " << endl;
		cin >> nuevPrecio;
		cout << "Ingrese cantidad: " << endl;
		cin >> nuevCantidad;

		act.Cantidad = nuevCantidad;
		act.Codigo = nuevCodigo;
		act.Precio = nuevPrecio;
		strcpy_s(act.Nombre, nombre);




		archivo.write(reinterpret_cast<const char *>(&act), sizeof(herramienta));

		cout << "Se a agregado el nuevo elemento" << endl;
	}