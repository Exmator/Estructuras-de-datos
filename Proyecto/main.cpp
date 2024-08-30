#include <iostream>
#include <vector>
#include <sstream>
#include <cstring>
#include "Ayuda.h"

using namespace std;

// Retorna una palabra con todas sus letras en minuscula
string toLowerCase(string palabra){
    for (int i=0; i<palabra.size(); i++)
        palabra[i] = tolower(palabra[i]);
    return palabra;
}

// Retorna la linea escrita en consola como un vector donde cada valor es una palabra.
vector<string> obtenerLineaDeConsola(){
    vector<string> linea;
    string entrada, palabra;

    getline(cin, entrada);
    cout << endl;

    istringstream stream(entrada); // Se convierte la entrada de tipo texto a stream

    while (stream >> palabra) {
        linea.push_back(toLowerCase(palabra)); // Se lee cada palabra separada por espacios y guarda en el vector
    }
    stream.clear();
    return linea;
}

// Imprime en pantalla una linea que ayuda a separar cada uno de los comandos de forma visual
void separarComandos(){
    cout << "-----------------------------------------------------\n";
}

int main(){
    vector<string> linea;
    Ayuda ayuda;

    while (true) {
        cout << "$"; // Se indica que se esta esperando una linea de comando
        linea = obtenerLineaDeConsola();

        if(linea.at(0) == "ayuda"){
            switch(linea.size()){
            case 1:
                ayuda.mostrarTodosLosComandos();
                separarComandos();
                break;
            case 2:
                ayuda.mostrarComando(linea.at(1));
                separarComandos();
                break;
            default:
                throw ("Error de sintaxis");
                break;
            }
        } else if(linea.at(0) == "salir"){
            return 0;
        } else {
            cout << "Comando no reconocido, intente de nuevo.\n\n";
        }

        linea.clear();
    }
}