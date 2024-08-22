/*************************************
* Nombre: Nicolas Algarra Polanco
* Archivo: ejercicio1.cpp
* Clase: Estructuras de datos
* Resumen: Este archivo contiene el ejercicio 1 propuesto
* en el taller 00 de la clase
*************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int NUM = 10;

using namespace std;

// Funcion que genera un entero aleatorio entre 0 y 25
int generarNumAleatorio(){	
	return rand() % 26;
}

int main(){
	srand(time(NULL)); // Se genera una semilla aleatoria
	
	int arreglo[NUM]; // Se crea un arreglo
	
	// Se llena el arreglo con numeros aleatorios
	for (int i = 0; i < NUM; ++i){
		arreglo[i] = generarNumAleatorio();
	}
	
	// Se crea un puntero que apunta a la direccion del primer elemento del arreglo
	int *puntero = &arreglo[0];
	
	// Se imprime el contenido del arreglo usando el puntero
	cout << "Contenido del arreglo\n";
	for (int i = 0; i < NUM; ++i){
		cout << "Posicion " << i+1 << ": ";
		cout << *(puntero + i) << endl;
	}
	
	// Se imprime la direccion de memoria de cada elemento usando el puntero
	cout << "\nDireccion en memoria del arreglo\n";
	for (int i = 0; i < NUM; ++i){
		cout << "Posicion " << i+1 << ": ";
		cout << puntero + i << endl;
	}
};



