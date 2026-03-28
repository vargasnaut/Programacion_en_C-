#include <iostream>
using namespace std;

void menu() {
    int num;
    cout << "\n¿Qué tipo de conversión desea?" << endl;
    cout << "1. Metros a Pulgadas" << endl;
    cout << "2. Pulgadas a Metros" << endl;
    cout << "Ingrese su opción -> ";
    cin >> num;

    if (num == 1) {
        float metros;
        cout << "Ingrese el número de metros -> ";
        cin >> metros;
        cout << "La cantidad de pulgadas son: " << metros * 39.37 << endl;
        menu();
    } else if (num == 2) {
        float pulgadas;
        cout << "Ingrese el número de pulgadas -> ";
        cin >> pulgadas;
        cout << "El número de metros es: " << pulgadas * 0.0254 << endl;
        menu();
    } else {
        cout << "Opción incorrecta" << endl;
        menu();
    }
}

int main() {
    menu();
    return 0;
}