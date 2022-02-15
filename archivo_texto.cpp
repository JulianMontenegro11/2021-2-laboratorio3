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

string leer(string nombre, bool modo)
{
    string datos, datos2;
    fstream archivo;
    unsigned long long tam;
    if(modo){
         archivo.open(nombre, fstream::in);
        if(archivo.is_open()){
            while(!archivo.eof()){
                datos.push_back(archivo.get());

            }
            datos.pop_back();
        }
    }else{
        archivo.open(nombre, fstream::in | fstream::binary | fstream::ate); // se abre el archivo en modo binario
        if(archivo.is_open()){
        tam=archivo.tellg(); // obtebeos tamaño del archivo
        archivo.seekg(0); // volvemos al cursor a la primera posicion del archivo
        for(unsigned long long i=0;i<tam;i++){ // recorremos el archivo caracter por caracter
            datos.push_back(archivo.get()); // vamos capturando y guardando cada caracter en el string datos
        }


        }else cout <<" El archivo no pudo ser abierto"<<endl;

    }
    archivo.close();
    return datos;
}
