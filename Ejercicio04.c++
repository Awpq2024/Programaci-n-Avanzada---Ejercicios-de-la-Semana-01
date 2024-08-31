//Ejercicio 04
#include <iostream>
using namespace std;

// Función que invierte las cifras del numero
int invertirNumero(int n) {
    int invertido = 0;
    while (n != 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    return invertido;
}

