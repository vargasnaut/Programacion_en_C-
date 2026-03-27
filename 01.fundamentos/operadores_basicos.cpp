#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float numero1, numero2;

    // OPERADORES ARITMETICOS
    cout << "Ingresa un número: ";
    cin >> numero1;
    cout << "Ingresa un número: ";
    cin >> numero2;

    cout << "Suma: " << numero1 + numero2 << endl;
    cout << "Resta: " << numero1 - numero2 << endl;
    cout << "Multiplicación: " << numero1 * numero2 << endl;
    cout << "División: " << numero1 / numero2 << endl;
    cout << "Módulo: " << fmod(numero1, numero2) << endl;
    cout << "Potencia: " << pow(numero1, numero2) << endl;
    cout << "División exacta: " << (int)(numero1 / numero2) << endl;

    // OPERADORES RELACIONALES
    cout << " > " << (numero1 > numero2) << endl;
    cout << " < " << (numero1 < numero2) << endl;
    cout << " >= " << (numero1 >= numero2) << endl;
    cout << " <= " << (numero1 <= numero2) << endl;
    cout << " == " << (numero1 == numero2) << endl;
    cout << " != " << (numero1 != numero2) << endl;

    // OPERADORES DE ASIGNACION
    int numero3 = 8;
    numero3 = numero3 - 2;
    cout << "Asignación: " << numero3 << endl;

    // OPERADORES LOGICOS
    bool numero = true;
    cout << "NOT: " << !numero << endl;

    return 0;
}