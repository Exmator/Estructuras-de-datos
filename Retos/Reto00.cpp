// Se trae la libreria iostream para la impresion y lectura de datos por consola
#include <iostream>

// Esta linea de comando se encarga de simplificar la escritura de los comandos incluidos en la libreria iostream
using namespace std;

// ---------------TAD para cafetera--------------------

// Se crea una clase de tipo Cafetera la cual se encargara de actuar como una cafetera y servir la bebida solicitada por el usuario

class Cafetera {
	public:
		// Esta funcion se encarga de que la cafetera sea capaz de servir Capuchino
		virtual void Capuchino() = 0;

		// Esta funcion se encarga de que la cafetera sea capaz de servir Tinto
		virtual void Tinto() = 0;
};

// ---------------TAD para Oster--------------------

// Se va a crear un Oster, la cual es un tipo de marca de cafetera, y realizara las mismas funciones que la clase Cafetera. Por lo cual, esta va a implementar las funciones de la clase Cafetera

class Oster: public Cafetera{
	public:
		//Se reescribe la funcion Capuchino de la clase Cafetera, con el fin de que esta indique que la cafetera Oster sirve un capuchino
		void Capuchino(){
			cout << "La cafetera Oster sirve un capuchino" << endl;
		}

		//Se reescribe la funcion Tinto de la clase Cafetera, con el fin de que esta indique que la cafetera Oster sirve un tinto
		void Tinto(){
			cout << "La cafetera Oster sirve un tinto" << endl;
		}
};

// ---------------TAD para Haceb--------------------

// Se va a crear un Haceb, la cual es un tipo de marca de cafetera, y realizara las mismas funciones que la clase Cafetera. Por lo cual, esta va a implementar las funciones de la clase Cafetera

class Haceb: public Cafetera{
	public:
		//Se reescribe la funcion Capuchino de la clase Cafetera, con el fin de que esta indique que la cafetera Haceb sirve un capuchino
		void Capuchino(){
			cout << "La cafetera Haceb sirve un capuchino" << endl;
		}

		//Se reescribe la funcion Tinto de la clase Cafetera, con el fin de que esta indique que la cafetera Haceb sirve un tinto
		void Tinto(){
			cout << "La cafetera Haceb sirve un tinto" << endl;
		}
};

// Esta funcion le pedira un numero al usuario, en caso de ser un numero diferente a 1 o 2, le pedira volver a digitar el numero al usuario. Y retornara el numero que selecciono el usuario
int lectura(){
	int seleccion = 0;
	while(true){
    		cin >> seleccion;
    		try{
      			if(cin.fail()){
           			throw "error";
       			}
       			if(!(seleccion==1||seleccion==2)){
           			throw "error";;
       			}
			return seleccion;
   		}
   		catch(...){
	 		cout<<"Ingrese un valor valido"<<endl;
   		}
	}
};

// ---------------Implementacion del main--------------------

// Cuando el programa se ejecute se le va a pedir al usuario que seleccione la cafetera Haceb u Oster, y una vez seleccionada; se le pedira seleccionar Tinto o Capuchino

int main(int argc, char **argv){
	
	// Variable que contendra la seleccion del usuario 
	int seleccion = 0;

	// Objeto cafetera que se encargara de actuar como la cafetera del usuario
	Cafetera* cafetera;

	cout << "Bienvenido!\n";
	cout << "Escriba el numero de la Cafetera que desee utilizar\n";
	cout << "1) Haceb\n";
	cout << "2) Oster\n";
	
	seleccion = lectura();
	
	// El usuario seleccionara que cafetera desea, en caso de ser 1 sera Haceb, en caso de ser 2 la cafetera sera Oster
	if(seleccion == 1) {
		cafetera = new Haceb();
	} else {
		cafetera = new Oster();
	}

	cout << "Escriba el numero de la bebida que desee tomar\n";
	cout << "1) Tinto\n";
	cout << "2) Capuchino\n";

	seleccion = lectura();
	
	// El usuario seleccionara que bebida desea, en caso de ser 1 sera Tinto, en caso de ser 2 sera Capuchino
	if(seleccion == 1) {
		cafetera->Tinto();
	} else {
		cafetera->Capuchino();
	}
};