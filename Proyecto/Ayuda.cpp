#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Ayuda.h"

using namespace std;

Ayuda::Ayuda(){
    leerComandos();
}

void Ayuda::mostrarTodosLosComandos(){
    cout<< "Para obtener mayor informacion de cada comando usar ayuda [nombre del comando]\n\n";

    cout << "Los comandos en el programa son los siguientes:\n\n";
    for(auto i = comandos.begin();i!=comandos.end();++i){
        cout << i->getNombre() << endl;
    }
    cout << endl;
}

void Ayuda::mostrarComando(string nombreComando){
    try{
        vector<Comando> listaComandos;
        bool comandoEncontrado = false;
        for(auto it = comandos.begin(); it !=comandos.end();++it){
            if(it->getNombre() == nombreComando){
                listaComandos.push_back((*it));
                comandoEncontrado = true;
            }
        }
        if(!comandoEncontrado){
            throw ("Comando no encontrado");
        }
        for(Comando comando: listaComandos){
            cout << comando.getNombre() << " " << comando.getParametros() << endl;
            cout << "\nDescripcion:";
            cout << comando.getDescripcion()<< endl<< endl;
        }
    }
    catch(string error){
        cout << "Error: " << error;
    }
}

void Ayuda::leerComandos(){
    Comando comando;
    string entrada;
    ifstream archivo(nombreArchivoComandos);
    if(!archivo.is_open()){
        cout << "Error al abrir el archivo de comandos " << nombreArchivoComandos << ", verifique que este archivo existe";
        archivo.close();
        return;
    }
    while(getline(archivo, entrada)){
        // Se asigna el nombre del comando
        comando.setnombre(entrada);
        // Se asigna los parametros del comando
        getline(archivo,entrada);
        comando.setParametros(entrada);
        // Se borra cualquier residuo en la descripcion del comando
        comando.setDescripcion("");
        // Se agrega la descripcion del comando
        getline(archivo,entrada);
        while(entrada != "/"){
            comando.setDescripcion(comando.getDescripcion()+"\n"+entrada);
            getline(archivo,entrada);
        }
        // Se agrega el nuevo comando a la lista
        comandos.push_back(comando);
    }
    archivo.close();
}

