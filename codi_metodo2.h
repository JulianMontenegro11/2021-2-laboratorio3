#ifndef CODI_METODO2_H
#define CODI_METODO2_H
#include "archivo_texto.h"

bool codificacion(int semilla, string nombre);
string convertir_texto_binario(string texto);
string convertir_int_binario(char letra);
string reglas_codificacion(int semilla, string binario);
string metodo2(string parte);
string convertir_binario_texto(string binario);
char convertir_letra(string parte);
bool decodificacion(int semilla, string nombre);
string regla_decodificacion(int semilla, string binario);
string metodo2_deco(string parte);



#endif // CODI_METODO2_H
