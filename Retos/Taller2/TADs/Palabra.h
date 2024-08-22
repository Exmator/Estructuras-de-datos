#include <string>

using namespace std;

class Palabra{
private:
    string palabra;
    unsigned int n_linea;
public:
    void fijarPalabra(string n_palabra);
    void fijarNumLinea(int n_num);
    string obtenerPalabra();
    int obtenerNumLinea();
};