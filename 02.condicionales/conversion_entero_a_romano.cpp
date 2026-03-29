/* Convertir un n+umero entero a romano de hasta 3 cifras */

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numero;
    cout << "Ingresa el número a convertir: ";
    cin >> numero;

    int millar   = (numero / 1000) * 1000;
    int centenas = ((numero - millar) / 100) * 100;
    int decenas  = ((numero - millar - centenas) / 10) * 10;
    int unidades = numero - millar - centenas - decenas;

    string romano = "";

    // Millares
    if      (millar == 3000) romano += "MMM";
    else if (millar == 2000) romano += "MM";
    else if (millar == 1000) romano += "M";

    // Centenas
    if      (centenas == 100) romano += "C";
    else if (centenas == 200) romano += "CC";
    else if (centenas == 300) romano += "CCC";
    else if (centenas == 400) romano += "CD";
    else if (centenas == 500) romano += "D";
    else if (centenas == 600) romano += "DC";
    else if (centenas == 700) romano += "DCC";
    else if (centenas == 800) romano += "DCCC";
    else if (centenas == 900) romano += "CM";

    // Decenas
    if      (decenas == 10) romano += "X";
    else if (decenas == 20) romano += "XX";
    else if (decenas == 30) romano += "XXX";
    else if (decenas == 40) romano += "XL";
    else if (decenas == 50) romano += "L";
    else if (decenas == 60) romano += "LX";
    else if (decenas == 70) romano += "LXX";
    else if (decenas == 80) romano += "LXXX";
    else if (decenas == 90) romano += "XC";

    // Unidades
    if      (unidades == 1) romano += "I";
    else if (unidades == 2) romano += "II";
    else if (unidades == 3) romano += "III";
    else if (unidades == 4) romano += "IV";
    else if (unidades == 5) romano += "V";
    else if (unidades == 6) romano += "VI";
    else if (unidades == 7) romano += "VII";
    else if (unidades == 8) romano += "VIII";
    else if (unidades == 9) romano += "IX";

    cout << romano << endl;
    return 0;
}