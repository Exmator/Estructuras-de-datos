#include "Palabra.h"
#include <string>
#include <vector>


using namespace std;

class ArchivoTexto {
private:
  vector<vector<string>> lineasTexto;

public:
  void fijarListaLineas(vector<vector<string>> n_lista);
  vector<vector<string>> obtenerListaLineas();
  int obtenerNumLineas();
  void agregarListaPals(vector<string> n_lista);
  bool empiezaLaPalabraConSubcadena(string palabra, string subcadena);
  vector<Palabra> buscarPrincipio(string subcadena);
  vector<Palabra> buscarContiene(string subcadena);
};