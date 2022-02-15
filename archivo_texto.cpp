#include "archivo_texto.h"



void crear_texto(string name)
{
    fstream archivo(name, fstream::out);/* Se crea una clase fstream para poder crear el archivo de texto
                                                    se pone en modo salida (out)
                                                    */
    archivo.close(); // se cierra el archivo
}

void escribir(string texto, string nombre, bool modo)
{
    if(modo) { // si el modo e verdadero se escribira de forma normal
        fstream archivo(nombre,fstream::out);
        archivo<<texto;
        archivo.close();
    }else {
        fstream archivo(nombre,fstream::out |fstream::binary); // si es falso se escribira en modo binario
        archivo<<texto;
        archivo.close();
    }

}

void leer(string nombre, bool modo)
{
    string datos, datos2;
    if(modo){
        fstream archivo(nombre, fstream::in);
        if(archivo.is_open()){
            while(!archivo.eof()){
                datos.push_back(archivo.get());
            }
            archivo.close();
        }
    }
}
