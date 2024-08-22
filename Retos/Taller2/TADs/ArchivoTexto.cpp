#include "ArchivoTexto.h"
#include <iostream>

// Esta funcion toma una nueva lista y la asigna a la lista de palabras
void ArchivoTexto::fijarListaLineas(vector<vector<string>> n_lista){
    this->lineasTexto=n_lista;
}

// Esta funcion retorna la lista de palabras
vector<vector<string>> ArchivoTexto::obtenerListaLineas(){
    return lineasTexto;
}

//Esta funcion retorna la cantidad de lineas del archivo
int ArchivoTexto::obtenerNumLineas(){
    return lineasTexto.size();
}

//Esta funcion agrega una nueva linea (un vector de palabras) al archivo
void ArchivoTexto::agregarListaPals(vector<string> n_lista){
    lineasTexto.push_back(n_lista);
}

// Esta funcion retorna si una palabra empieza con una subcadena
bool ArchivoTexto::empiezaLaPalabraConSubcadena(string palabra, string subcadena){
    bool empiezaLaPalabraConSubcadena = false;
    for(int i=0;i<subcadena.size();++i){
        if(palabra[i]!=subcadena[i]){
            break;
        }
        if(i==(subcadena.size()-1)){
            empiezaLaPalabraConSubcadena = true;
        }
    }
    return empiezaLaPalabraConSubcadena;
}

// Esta funcion retorna un vector que contiene todas las palabras que comienzan con una subcadena en el archivo
vector<Palabra> ArchivoTexto::buscarPrincipio(string subcadena){
    vector<Palabra> listaPalabras;
    Palabra palabraQueComienza;

    /*
    * Este ciclo recorre todas las lineas del archivo, por cada linea 
    * recorre todas las palabras de la linea y si la palabra empieza con la 
    * subcadena, la agrega a la lista de palabras
    */
    
    for(int i=0;i<lineasTexto.size();++i){
        for(string palabra: lineasTexto.at(i)){
            if(empiezaLaPalabraConSubcadena(palabra,subcadena)){
                palabraQueComienza.fijarPalabra(palabra);
                palabraQueComienza.fijarNumLinea(i+1);
                listaPalabras.push_back(palabraQueComienza);
            }
        }
    }
    return listaPalabras;
}

// Esta funcion retorna un vector que contiene todas las palabras que tienen una subcadena en el archivo
vector<Palabra> ArchivoTexto::buscarContiene(string subcadena){
    vector<Palabra> listaPalabras;
    Palabra palabraQueContiene;
    int linea=1;

    /*
    * Este ciclo recorre todas las lineas del archivo, por cada linea 
    * recorre todas las palabras de la linea y si la palabra contiene la subcadena
    * la agrega a la lista de palabras
    */
    
    for(auto it=lineasTexto.begin();it!=lineasTexto.end();++it){
        for(string palabra: *it){
            if(palabra.find(subcadena)!= string::npos){
                palabraQueContiene.fijarPalabra(palabra);
                palabraQueContiene.fijarNumLinea(linea);
                listaPalabras.push_back(palabraQueContiene);
            }
        }
        linea++;
    }
    return listaPalabras;
}