#include "Comando.h"
#include <list>
#include <string>

using namespace std;

class Ayuda{
    private:
        // Un objeto tipo mapa que contiene todos los comandos del programa 
        list<Comando> comandos;
        // String que tiene el nombre del archivo que contiene los comandos 
        const string nombreArchivoComandos = "Lista_Comandos.txt";
    public:
        // Constructor que ayuda a leer los comandos apenas se crea la instancia
        Ayuda();
        // Muestra en consola una lista de todos los comandos en el programa 
        void mostrarTodosLosComandos();
        // Muestra en consola la descripción de un comando indicado por el nombre
        void mostrarComando(string nombreComando);
        // Actualiza el mapa de comandos segun los comandos en el archivo de comandos 
        void leerComandos();
};