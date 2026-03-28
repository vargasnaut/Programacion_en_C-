/*
    Como seguramente sabrás, debido a algunas razones astronómicas, el año puede ser bisiesto
    o común. Los primeros tienen una duración de 366 días, mientras que los últimos tienen 
    una duración de 365 días.

    Desde la introducción del calendario gregoriano en 1582, se utiliza la siguiente regla 
    para determinar el tipo de año.

        * Si el número del año NO es divisible entre 4, es un año común
        * De lo contrario, si el número del año no es divisible entre 100, es un año bisiesto
        * De lo contrario, si el número del año no es divisible entre 400, es un año común
        * De lo contrario, es un año bisiesto
*/

#include <iostream>
using namespace std;
int main() {
    int anio;
    cout << "Ingrese un año: ";
    cin >> anio;

    if (anio%4 != 0)
        cout << "El año " << anio << " es un año común" << endl;
    else if (anio%100 != 0)
        cout << "El año " << anio << " es un año bisiesto" << endl;
    else if (anio%400 != 0)
        cout << "El año " << anio << " es un año común" << endl;
    else
        cout << "El año " << anio << " es un año bisiesto" << endl;
    return 0;
}