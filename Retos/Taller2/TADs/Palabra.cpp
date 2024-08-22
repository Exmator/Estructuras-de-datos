#include "Palabra.h"

using namespace std;

// Esta funcion toma una palabra y la asigna a la palabra
void Palabra::fijarPalabra(string n_palabra){
    this->palabra=n_palabra;
}

// Esta funcion cambia el numero de la linea en la que se encuentra la palabra
void Palabra::fijarNumLinea(int n_num){
    this->n_linea=n_num;
}

// Esta funcion retorna la palabra
string Palabra::obtenerPalabra(){
    return palabra;
}

// Esta funcion retorna el numero de la linea en la que se encuentra la palabra
int Palabra::obtenerNumLinea(){
    return n_linea;
}


