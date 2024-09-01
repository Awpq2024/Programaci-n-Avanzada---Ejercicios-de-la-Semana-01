//Ejercicio 04
#include <iostream>
using namespace std;
int invertir (int);
int main() 
{
    int num;
    resultado;
    cout << "Introduce un numero entero: ";
    cin >> num;
    resultado = invertir(num);
    cout << "Numero introducido: " << num << endl;
    cout << "Numero con las cifras invertidas: "; << resultado << emdl;
    system ("pause");
}
unt invertir (int num)
{
    int inverso = 0 , cifras;
    while (num != 0)
        {
            cifra = num % 10;
            inverso = inverso * 10 + cifra;
            num = num / 10;
        }
    return inverso;
}
