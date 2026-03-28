#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int edad;
    float peso, estatura, imc;

    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Ingresa tu peso en kg: ";
    cin >> peso;
    cout << "Ingresa tu estatura en metros: ";
    cin >> estatura;

    imc = peso / pow(estatura, 2);

    if (edad >= 20) {
        if (imc >= 0 && imc < 18.5)
            cout << "Bajo peso" << endl;
        else if (imc >= 18.5 && imc < 25)
            cout << "Normal" << endl;
        else if (imc >= 25 && imc < 30)
            cout << "Sobre peso" << endl;
        else if (imc >= 30)
            cout << "Obeso" << endl;
        else
            cout << "Valores erróneos" << endl;
    } else {
        cout << "Eres menor de 20 años, por ende no podemos calcular tu IMC" << endl;
    }

    return 0;
}