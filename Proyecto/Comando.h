#include <string>

using namespace std;

class Comando{
    private:
        string nombre;
        string parametros;
        string descripcion = "";

    public:
        string getNombre();
        string getParametros();
        string getDescripcion();
        void setnombre(string nombre);
        void setParametros(string parametros);
        void setDescripcion(string descripcion);
};