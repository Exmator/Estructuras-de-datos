#include <algorithm>
#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> listaEnteros = {12,5,10,9,7,0,-1}; //Se crea una lista de enteros
  listaEnteros.push_back(11); // push_back agrega el elemento al ultimo lugar de la lista
  listaEnteros.push_back(18);
  auto it = find(listaEnteros.begin(),listaEnteros.end(),10) // Se encuentra el iterador donde se encuentra el numero 10 en la lista de enteros

  if (it != listaEnteros.end()) {
    listaEnteros.insert(it, 21); //En la posicion siguiente al iterador se agrega el dato 21
  }

  for (int x: listaEnteros) {
    cout << x << endl;
  }
}
