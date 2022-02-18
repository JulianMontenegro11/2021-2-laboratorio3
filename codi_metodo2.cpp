#include "codi_metodo2.h"



bool codificacion(int semilla, string nombre)
{
    string texto, binario;
    texto = leer(nombre, true); // en texto guardare lo que se lea en modo normal con la funcion leer
    binario=convertir_texto_binario(texto); // binario es e texto ya convertido en binario
    binario=reglas_codificacion(semilla,binario);
    texto=convertir_binario_texto(binario);
    escribir(texto,nombre,true);
    return true;

}

string convertir_texto_binario(string texto)
{
    string binario,auxiliar;
    for (unsigned long long i=0;i< texto.length();i++){ // ciclo para recorrer letra por letra el archivo de texto
        auxiliar= convertir_int_binario((texto[i])); // auxiliar guardara la convercion de cada letra que va ingresando
        binario.append(auxiliar); // se concatena a binario cada dato que va entrando a auxiliar
    }
    return binario;
}

string convertir_int_binario(char letra)
{
    string binario;
    for(int i =0; i<8;i++){
        binario.push_back((letra<<i&0b10000000)/128); /* Con el for pasamos cada numero del binario a la primera posicion
                                                    hacemos la operacion and con el numero 10000000, de esta manera
                                                    el resultado sera 0 o 128 si es 128 al dividir el resultado sera 1
                                                    */
    }
    return binario;
}






string reglas_codificacion(int semilla, string binario){ /* esta funcion me aplicara las reglas del metodo
                                                          1. partir el bloque de grupos de a n(semilla)
                                                             usamos la funcion sbstr la cual nos retorna un string entre
                                                             las pociciones que yo le indique

                                                                */

    string parte, datos;
 for(unsigned long long i=0;i<binario.length();i++){
     parte.push_back(binario[i]);
     if((i+1)%semilla==0 || i==binario.length()-1){  /* el primer termino siempre sera un multiplo de semilla
                                                       y ademas se pone condicion para no perder binarios que no esten
                                                     en un grupo con cantidad exacta
                                                        */
      parte=metodo2(parte);
      datos.append(parte);
      parte.clear();
     }

 }
  return datos;

}


string metodo2(string parte){
    string datos;
    datos.push_back(parte[parte.length()-1]); // el ultimo dato de la parte cortada pasa a ser el primero,
    for(unsigned long long i=0;i<parte.length()-1;i++){
        datos.push_back(parte[i]);
    }
    return datos;
}

string convertir_binario_texto(string binario){
    string datos, parte;
    for(unsigned long long i=0; i<binario.length();i++){
        parte.push_back(binario[i]);
        if((i+1)%8==0 ){
            datos.push_back(convertir_letra(parte));
            parte.clear();
    }
}
return datos;
}

char convertir_letra(string parte){
    char letra=0;
    for(unsigned long long i=0, j=128;i<parte.length();i++,j/=2){
        letra+=j*parte[i];
    }
    return letra;
}

//=================================================DECODIFICACION==================================================================

bool decodificacion(int semilla, string nombre)
{
    string texto, binario;
    texto=leer(nombre,true);
    binario=convertir_texto_binario(texto);
    binario=regla_decodificacion(semilla, binario);
    texto=convertir_binario_texto(binario);
    escribir(texto,nombre,true);
    return true;

}

string regla_decodificacion(int semilla, string binario)
{


    string parte, datos;
    for (unsigned long long i=0;i<binario.length();i++){
        parte.push_back(binario[i]);
        if(((i+1)%semilla==0) || i==binario.length()-1 ){
            parte=metodo2_deco(parte);
            datos.append(parte);
            parte.clear();
        }

    }
    return datos;
}

string metodo2_deco(string parte)
{
    string datos,auxiliar;
    for(unsigned long long i=1;i<parte.length();i++){
        datos.push_back(parte[i]);
    }
    datos.push_back(parte[0]);
    return datos;
}
