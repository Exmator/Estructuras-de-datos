#include "TADs/ArchivoTexto.h"
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/* 
* Esta funcion toma un archivo de texto y una subcadena, e imprime en pantalla
* todas las palabras dentro del archivo que comienzan con la subcadena,
* y muestra el numero de linea en la que se encuentra cada palabra y 
* la palabra en si
*/

void mostrarPalabrasEmpiezan(ArchivoTexto archivoTexto, string subcadena) {
  vector<Palabra> vectorPalabras = archivoTexto.buscarPrincipio(subcadena);

  for (Palabra palabra : vectorPalabras) {
    cout << "Linea " << palabra.obtenerNumLinea() << ": "
         << palabra.obtenerPalabra() << endl;
  }
}

/* 
* Esta funcion toma un archivo de texto y una subcadena, e imprime en pantalla
* todas las palabras dentro del archivo que contienen la subcadena,
* y muestra el numero de linea en la que se encuentra cada palabra y 
* la palabra en si
*/
void mostrarPalabrasContienen(ArchivoTexto archivoTexto, string subcadena) {
  vector<Palabra> vectorPalabras = archivoTexto.buscarContiene(subcadena);

  for (Palabra palabra : vectorPalabras) {
    cout << "Linea " << palabra.obtenerNumLinea() << ": "
         << palabra.obtenerPalabra() << endl;
  }
}

int main(int argc, char* argv[])
{
  if(argc<2){
    cout<<"No se ha ingresado el nombre del archivo"<<endl;
    return 1;
  }
  
  ifstream archivo("entradas/" + string(argv[1]));
  vector<string> vectorPalabras;
  ArchivoTexto archivoTexto;
  string linea, palabraBuscada, palabra;
  stringstream lineaStream;

  // Se lee la cantidad de lineas del archivo y la subcadena a analizar
  getline(archivo, linea);
  getline(archivo, palabraBuscada);

  /* 
  * Se lee cada linea del archivo y se agrega a la lista de palabras 
  * siguiendo el formato de la estructura de datos vector<vector<string>>
  */
  while (getline(archivo, linea)) {
    lineaStream << linea;
    while (getline(lineaStream, palabra, ' ')) {
      vectorPalabras.push_back(palabra);
    }
    archivoTexto.agregarListaPals(vectorPalabras);
    vectorPalabras.clear();
    lineaStream.clear();
  }

  // Se muestran las palabras que empiezan con la subcadena ingresada
  cout << "Las palabras que empiezan con " << palabraBuscada
       << " son: " << endl;
  mostrarPalabrasEmpiezan(archivoTexto, palabraBuscada);

  // Se muestran las palabras que contienen la subcadena ingresada
  cout << "Las palabras que contienen " << palabraBuscada << " son " << endl;
  mostrarPalabrasContienen(archivoTexto, palabraBuscada);

  // Se reversa la palabra a buscar
  reverse(palabraBuscada.begin(), palabraBuscada.end());

  // Se muestran las palabras que empiezan con la subcadena al revez
  cout << "Las palabras que empiezan con " << palabraBuscada
       << " son: " << endl;
  mostrarPalabrasEmpiezan(archivoTexto, palabraBuscada);

  // Se muestran las palabras que contienen la subcadena al revez
  cout << "Las palabras que contienen " << palabraBuscada << " son " << endl;
  mostrarPalabrasContienen(archivoTexto, palabraBuscada);

  archivo.close();

  return 0;
}