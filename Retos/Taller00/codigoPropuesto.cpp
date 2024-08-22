/*************************************
* Nombre: Nicolas Algarra Polanco
* Archivo: codigoPropuesto.cpp
* Clase: Estructuras de datos
* Resumen: Este archivo contiene el codigo mostrado
* en el taller 00 de la clase
*************************************/
#include <iostream>

using namespace std;

// Se crea una estructura de venta, que tiene la cantidad vendida y el precio del producto
struct venta{
    int cantidad;
    double precio;
};

int main(){
    // Se crea un objeto venta y un puntero que apunta a un objeto venta
    venta *puntero, valor_venta;
    // El puntero apunta al objeto venta creado con anterioridad
    puntero = &valor_venta; 

    // Se pide los valores de venta por medio del apuntador
    cout << "Cantidad de productos: ";
    cin >> (*puntero).cantidad;
    cout << "Precio del producto: ";
    cin >> (*puntero).precio;

    // Se imprime la cantidad a pagar total usando el apuntador
    cout << "Valor a pagar: " << (*puntero).cantidad*(*puntero).precio << endl;
    
    return 0;
};