/*************************************
* Nombre: Nicolas Algarra Polanco
* Archivo: ejercicio2.cpp
* Clase: Estructuras de datos
* Resumen: Este archivo contiene el ejercicio 2 propuesto
* en el taller 00 de la clase, se creara una factura
*************************************/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// constante que contiene el nombre del archivo donde se guardara la factura
const string NOMBRE_ARCHIVO_FACTURA = "FacturaElectronica.txt";

// Estructura cliente que contiene el id y nombre del cliente
struct Cliente{
	int id;
	string nombre;
};

// Estructura factura que contiene toda la informacion necesaria de la factura
struct Factura{
	string nombreProducto;
	int cantidad;
	double precio;
	Cliente cliente;
};

/* 
* Esta funcion llena los datos de la factura
* pidiendole los datos al usuario por consola
*/
void llenarFactura(Factura& factura){
	Factura *punteroFactura;
	Cliente *punteroCliente, cliente;
	punteroFactura = &factura;
	punteroCliente = &cliente;
	
	cout << "Nombre del producto: ";
	cin >> (*punteroFactura).nombreProducto;
	cout << "Cantidad de productos: ";
	cin >> (*punteroFactura).cantidad;
	cout << "Precio del producto: ";
	cin >> (*punteroFactura).precio;
	cout << "ID del cliente: ";
	cin >> (*punteroCliente).id;
	cout << "Nombre del cliente: ";
	cin >> (*punteroCliente).nombre;
	
	(*punteroFactura).cliente = cliente;
	cout << endl;
};

/*
* Esta funcion imprime en consola los datos
* dentro de la factura
*/
void imprimirFactura(Factura& factura){

	Factura* punteroFactura = &factura;

	cout << "Nombre del producto: " << punteroFactura->nombreProducto << endl;
	cout << "Cantidad de productos: " << punteroFactura->cantidad << endl;
	cout << "Precio del producto: " << punteroFactura->precio << endl;
	cout << "ID del cliente: " << punteroFactura->cliente.id << endl;
	cout << "Nombre del cliente: " << punteroFactura->cliente.nombre << endl;
	cout << "Valor a pagar: " << punteroFactura->cantidad * punteroFactura->precio << endl;
};

/*
* Esta funcion crea un archivo de texto que contiene
* los datos de la factura
*/
void crearArchivoSegunFactura(Factura& factura){
	ofstream archivo(NOMBRE_ARCHIVO_FACTURA);
	Factura* punteroFactura = &factura;

	if(!archivo.is_open()){
		cout << "Error al crear el archivo " << NOMBRE_ARCHIVO_FACTURA << endl;
		archivo.close();
		return; 
	}

	archivo << "Nombre del producto: " << punteroFactura->nombreProducto << endl;
	archivo << "Cantidad de productos: " << punteroFactura->cantidad << endl;
	archivo << "Precio del producto: " << punteroFactura->precio << endl;
	archivo << "ID del cliente: " << punteroFactura->cliente.id << endl;
	archivo << "Nombre del cliente: " << punteroFactura->cliente.nombre << endl;
	archivo << "Valor a pagar: " << punteroFactura->cantidad * punteroFactura->precio << endl;

	archivo.close();
};

int main(){

	Factura factura;
	llenarFactura(factura);
	imprimirFactura(factura);
	crearArchivoSegunFactura(factura);
	
	return 0;
};



