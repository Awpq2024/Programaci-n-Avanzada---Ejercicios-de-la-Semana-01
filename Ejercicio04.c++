//Ejercicio 04
#include <iostream>
using namespace std;
int invertir (int);
int main() 
{
    int num;
    int resultado;
    cout << "Introduce un numero entero: ";
    cin >> num;
    resultado = invertir(num);
    cout << "Numero introducido: " << num << endl;
    cout << "Numero con las cifras invertidas: " << resultado << endl;
    system ("pause");
}
int invertir (int num)
{
    int inverso = 0 , cifra;
    while (num != 0)
        {
            cifra = num % 10;
            inverso = inverso * 10 + cifra;
            num = num / 10;
        }
    return inverso;
}
