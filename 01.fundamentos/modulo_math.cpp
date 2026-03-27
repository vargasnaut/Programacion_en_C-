#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    cout << "ingresa un numero: ";
    int numero;
    cin >> numero;
    cout << "el raiz cuadrada de "<< numero <<" es: "<< sqrt(numero) << endl;
    cout << "sen de "<< numero <<" es: "<< sin(numero) << endl;
    cout << "cos de "<< numero <<" es: "<< cos(numero) << endl;
    cout << "exponencial de "<< numero <<" es: "<< exp(numero) << endl;
    return 0;
}