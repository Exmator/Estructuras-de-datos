/*
Archivo: queues.cpp
Autor: Nicolas Algarra Polanco
Fecha: 12/08/2024

Descripcion:
Este archivo tiene el objetivo de guardar las funcionalidades que
ofrece la estructura de queue o fila en español
*/

#include <iostream>
#include <queue>

using namespace std;

template <class Tipo> void imprimirFilaEnConsola(queue<Tipo> fila);

int main(){
    queue<string> animales; // Se crea un contenedor de estructura fila, que contiene texto de animales

    animales.push("Gato"); //Se agrega el animal gato a la fila
    animales.push("Hormiga");
    animales.push("Conejo");
    animales.push("Perro");

    cout << "\n Cola inicial: \n";
    imprimirFilaEnConsola<string>(animales);

    animales.pop(); //pop() elimina el valor al frente de la fila (primer ingresado, osea, a gato) 
    cout << "\n Cola final: \n";
    imprimirFilaEnConsola<string>(animales);

    return 0;
}

template <class Tipo> void imprimirFilaEnConsola(queue<Tipo> fila){
    cout << "\n Tamaño de la cola: " << fila.size() << endl; // size() retorna el tamaño de la fila

    while(!fila.empty()){ //empty() retorna si la fila esta vacia
        cout << fila.front() << ", "; // front() retorna el valor al frente de la fila (primer ingresado)
        fila.pop(); //pop() elimina el valor al frente de la fila (primer ingresado)
    }
    cout << endl;
}