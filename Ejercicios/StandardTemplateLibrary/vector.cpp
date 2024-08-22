#include <vector>
#include <iostream>

using namespace std;

int main(){
  // se crean 2 vectores
  vector<int> v1, v2;

  // Se añaden elementos al final de los vectores
  for (int i = 1; i <= 10; i++){
    v1.push_back(i); // push_back agrega elementos al final del vector
    v2.push_back(i+2);
  }

  // Se crea un iterador para el vector, el cual apuntara al primer elemento del vector
  vector<int>::iterator itr = v1.begin();

  // Se copian los elementos de v2 al principio de v1
  copy(v2.begin(), v2.end(), inserter(v1, itr));

  // Se muestra los elementos del vector v1
  cout << "Elementos del vector 1 despues de copiar los elementos del vector 2: \n";
  for(itr = v1.begin();itr != v1.end(); ++itr){
    cout << " " << *itr;
  }

  return 0;
};
