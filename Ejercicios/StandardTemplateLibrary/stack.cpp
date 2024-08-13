/*
Archivo: stack.cpp
Autor: Nicolas Algarra Polanco
Fecha: 12/08/2024

Descripcion:
Este archivo tiene el objetivo de guardar las funcionalidades que
ofrece la estructura de stack o pila en español
*/
#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> pila; // Se crea una estructura pila, que contendra enteros
    pila.push(10); // Se agrega un objeto a la pila (en este caso 10)
    pila.push(20);
    pila.push(30);
    pila.push(40);

    pila.pop(); // Se elimina el ultimo elemento ingresado (el 40)
    pila.pop(); // elimina el 30

    while(!pila.empty()){ // empty() verifica si la pila esta vacia
        cout << " " << pila.top(); // top() retorna el valor mas arriba de la pila
        pila.pop();
    }
    cout << "\n ... fin \n";
}