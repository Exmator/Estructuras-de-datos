/********************************************** 
Autor: Nicolás Algarra Polanco 
Profesor: Jhon Corredor 
Materia: Estructura de datos 
Fecha: 24/07/2024 
**********************************************/ 

#include <iostream> 
#include <string> 
#include <math.h> 

using namespace std; 

/*  
La funcion sumaRecursiva suma los n valores anteriores a n. 
  
Un ejemplo de este seria con un n = 9, 
la funcion hace una suma de 1+2+3+4+5+6+7+9 = 45 
y retorna el resultado final 
*/ 
  
int sumaRecursiva(int n){ 
  if(n <= 1) { 
    return n; 
  }
  else{ 
    return n + sumaRecursiva(n-1); 
  }; 
}; 
  
/*  
Esta funcion toma los n valores pares anteriores y a cada uno lo eleva a la 2, luego los suma. 
  
Un ejemplo de este seria con un n = 6, 
la funcion hace una suma de 2^2+4^2+6^2 = 56 
y retorna el resultado final 
*/ 
  
int cuadradosPares(int n){ 
  if(n == 0){ 
    return n; 
  } 
  else if(n % 2 == 0) { 
    return n*n + cuadradosPares(n-1); 
  } else { 
    return cuadradosPares(n - 1); 
  }; 
}; 
  
/*  
Esta funcion multiplica los n valores anteriores por dos, a cada uno lo eleva a la 2 y luego los suma. 
  
Un ejemplo de este seria con un n = 3, 
la funcion hace una suma de (1+1)^2+(2+2)^2+(3+3)^2 = 56 
y retorna el resultado final 
*/ 
  
int cuadradosPares2(int n){ 
  if(n == 0){ 
    return n; 
  } else { 
    return pow(n+n,2) + cuadradosPares2(n - 1); 
  }; 
}; 

/*  
Esta funcion da el numero de fibonacci 
  
Un ejemplo de este seria con un n = 4, 
la funcion hace una suma de 0+1+1+2 = 4 
y retorna el resultado final 
*/ 

int fibNumero(int n){ 
  if(n <= 1){ 
    return n; 
  } else { 
    return fibNumero(n-1) + fibNumero(n-2); 
  }; 
}; 

/*  
Esta funcion retorna si el caracter c se encuentra en el string s
  
Un ejemplo de este seria con c = g y s = "gato", 
la funcion compara cada caracter del string gato y mira si es una g, como gato tiene g, retorna True
y retorna el resultado final 
*/ 
  
bool lineal(string s, char c, int l){ 
  if(l < 0){ 
    return false; 
  } else if (s[l] == c){ 
    return true;		 
  } else { 
    return lineal(s, c, l-1); 
  }; 
}; 
  
  
int main(){ 
  int opt; 
  int num; 
  string palabra; 
  char letra; 
   
  cout << "Bienvenido al programa!\n"; 
   
  while(true){ 
    cout << "Seleccione el numero de la operacion que desee realizar\n"; 
    cout << "1) suma recursiva\n"; 
    cout << "2) cuadrados pares\n"; 
    cout << "3) cuadrados pares 2\n"; 
    cout << "4) numero de fibonachi\n"; 
    cout << "5) lineal\n"; 
    cout << "6) Salir del programa\n"; 
     
    cin >> opt; 
     
    switch(opt){ 
    case 1: 
      cout << "Ingrese el numero al que quiere realizar suma recursiva\n"; 
      cin >> num; 
       
      cout << "Suma: " << sumaRecursiva(num) << endl<< endl; 
      break; 
    case 2: 
      cout <<"Ingrese el numero al que quiere realizar cuadrados pares\n"; 
      cin >> num; 
       
      cout << "Cuadrados pares: " << cuadradosPares(num) << endl<< endl; 
      break; 
    case 3: 
      cout << "Ingrese el numero al que quiere realizar cuadrados pares 2\n"; 
      cin >> num; 
       
      cout << "Cuadrados pares 2: " << cuadradosPares2(num) << endl<< endl; 
      break; 
    case 4: 
      cout << "Ingrese el numero al que quiere hallar el numero de fibonachi\n"; 
      cin >> num; 
       
      cout << "Fibonachi: " << fibNumero(num) << endl<< endl; 
      break; 
    case 5: 
      cout << "Ingrese la palabra que desee analizar\n"; 
      cin >> palabra; 
       
      cout << "Ingrese la letra que desea buscar dentro de la palabra\n"; 
      cin >> letra; 
       
      cout << "¿Esta la letra en la palabra?: " << lineal(palabra,letra,palabra.length()) << endl<< endl; 
      break; 
    case 6: 
      cout << "Gracias por usar el programa"; 
      return 0; 
    default: 
      cout << "Ingrese una opcion valida"; 
      break; 
    }	 
  };
}; 
