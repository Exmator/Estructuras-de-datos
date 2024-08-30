#include <string>

using namespace std;

class Comando{
    private:
        // contiene el nombre del comando 
        string nombre;
        // contiene los parámetros del comando 
        string parametros;
        // contiene la descripción del comando
        string descripcion = "";

    public:
        //Getters y setters
        string getNombre();
        string getParametros();
        string getDescripcion();
        void setnombre(string nombre);
        void setParametros(string parametros);
        void setDescripcion(string descripcion);
};
