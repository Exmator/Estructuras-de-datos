#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
  // Se crean conjuntos y llenan de datos
  set<string> conjunto0{"iphone", "android", "basic", "landline"}; 
  set<char> conjunto1{'a','b','c','d'};
  set<int> conjunto2{1,3,4,5}; 
  int i = 5;

  for(auto it = conjunto0.begin(); it!= conjunto0.end(); ++it ++i){
    conjunto1.insert('a' + i); // insert ingresa x dato al conjunto
  }

  cout << "Tamaño del conjunto0: " << conjunto0.size();
  cout << endl;
  cout << "Tamaño del conjunto1: " << conjunto1.size();
  cout << endl;
  
  return 0;
}
