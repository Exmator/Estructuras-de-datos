#include "Comando.h"

// Getters y setters:

string Comando::getNombre(){
    return nombre;
}
string Comando::getParametros(){
    return parametros;
}
string Comando::getDescripcion(){
    return descripcion;
}
void Comando::setnombre(string nombre){
    this->nombre=nombre;
}
void Comando::setParametros(string parametros){
    this->parametros=parametros;
}
void Comando::setDescripcion(string descripcion){
    this->descripcion=descripcion;
}