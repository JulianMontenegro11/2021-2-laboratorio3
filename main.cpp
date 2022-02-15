#include "archivo_texto.h"
int main()
{

    //fstream archivo("texto.txt", fstream::out);

    //===================== Escritura
    //archivo << "Hola mundo, que tal todo?";
    // funcion put permite escribir un caracter en el archivo
    //archivo.put('J');
    //funcion write, recibe dos parametros (cadena de caracteres y tamaño)
    //archivo.write("Julian Montenegro", 14);

    //cursor (es como un puntero que apunta a la posicion donde deseo escribir)
    //archivo.seekp(7);
    //archivo.write("Ximena ",7);

    //====================== Lectura

   // string datos;
    //long long int tam;
    //fstream archivo_lec("texto.txt",fstream::in);
    // bandera is_open, nos confirma si el archivo fue abierto
      //if(archivo_lec.is_open()){
        // while(!archivo_lec.eof()){ // se ejecutara hasta que se encuentra con el caracter de fin de archivo
          //   datos.push_back(archivo_lec.get()); /* guarda el caracter que se le entrega, concatena y se entrega el caracter con la funcion get
            //                                         get va moviendo el cursor  */

         //}

        //archivo_lec.close();
        //fstream tex2("texto.txt", fstream::in |fstream::ate);
        //tam=tex2.tellg(); // para obtener el numero de la posicion del cursor (el tamaño del texto)
        //cout<<"el tamanio del archivo es: "<< tam<<endl;

      //}  else cout<<"El archivo no pudo ser abierto"<<endl;

      //cout <<datos<<endl;
    //----------------
    //>> equivalente al <<
    // get equivalente al put
    // getline nos permite obtener el contenido del archivo de texto sin saltos de linea
    // read equivalente a la funcion write

    // cursor
     // tellg retorna la posicion donde esta el cursor




    return 0;
}
