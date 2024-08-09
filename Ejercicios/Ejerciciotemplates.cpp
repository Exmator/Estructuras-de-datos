/********************************
Ejercicio: Creación de plantillas
Autor: Nicolas Algarra Polanco
Fecha: 09/08/2024
Materia: Estructura de datos
********************************/

#include <iostream>

using namespace std;

// Funcion plantilla que suma dos numeros del mismo tipo
template <class Clase> Clase suma (const Clase num1, const Clase num2){
	return (num1 + num2);
};

// Funcion plantilla que devuelve el valor mayor
template <typename Clase> Clase myMax(Clase num1, Clase num2){
	return (num1 > num2)?num1:num2;
};

int main(){
	cout << "La suma de 20 y 23 usando la plantilla suma da: " << suma<int>(20,23) << endl;
	cout << "La suma de 0.23 y 5.66 usando la plantilla suma da: " << suma<float>(0.23,5.66) << endl;
	cout << "La suma de 2 y 6 usando la plantilla suma da: " << suma<long>(2,6) << endl;

	cout << "La suma de 20 y 23 usando la plantilla myMax da: " << myMax<int>(20,23) << endl;
	cout << "La suma de e y r usando la plantilla myMax da: " << myMax<char>('e','r') << endl;
	return 0;
};