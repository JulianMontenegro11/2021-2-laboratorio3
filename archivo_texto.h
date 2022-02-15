#ifndef ARCHIVO_TEXTO_H
#define ARCHIVO_TEXTO_H
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void crear_texto(string name);
void escribir(string texto,string nombre, bool modo); // modo es la manera en la que escribiremos los datos, normal, binario
string leer(string nombre, bool modo);


#endif // ARCHIVO_TEXTO_H
