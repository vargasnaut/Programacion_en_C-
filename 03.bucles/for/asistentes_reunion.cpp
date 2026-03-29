/*
    Realizar un programa que pida al usuario la cantidad de asistentes a una reunion,
    pida la edad de cada asistente utilizando un for e imprima al final del programa
    el asistente con mayor y menor edad de todos
*/

#include <iostream>
using namespace std;

int main() {
    int asistentes, edad;
    int mayor = -1;
    int menor = 99999;

    cout << "Ingrese la cantidad de asistentes por favor: ";
    cin >> asistentes;

    for (int i = 0; i < asistentes; i++) {
        cout << "Ingrese la edad del asistente N° " << i + 1 << ": ";
        cin >> edad;

        if (edad > mayor)
            mayor = edad;
        else if (edad < menor)
            menor = edad;
    }

    cout << "\nEl asistente con mayor edad tiene: " << mayor << " años" << endl;
    cout << "El asistente con menor edad tiene: " << menor << " años" << endl;

    return 0;
}