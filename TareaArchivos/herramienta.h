#pragma once

#ifndef  herramienta_h
#define herramienta_h

//struct herramienta {
//	int Creg;
//	int Codigo;//4 bytes
//	char Nombre[30];// 30 bytes
//	int Cantidad;//4 bytes
//	float Precio;//4 bytes



};//size of= 42 bytes

void InsertarHerramienta(int);
int cantidadDeRegistrosAgregados();
void BuscarHerramienta(int);
void EliminarHerramienta(int);
void RegistrarHerramienta();
void CrearArchivo();
int CantidadDeRegistros();
void MostrarHerramientas();
void consultarHerramientas();

#endif // ! herramienta_h