#include <iostream>
using namespace std;
int main()
{
    // VARIABLES
    int numero1 = 10;
    float numero2 = 3.14;
    char letra = 'A';
    string texto = "Hola, mundo!";
    bool esVerdadero = true;

    // MOSTRAR VARIABLES
    cout << "Número entero: " << numero1 << endl;
    cout << "Número decimal: " << numero2 << endl;
    cout << "Carácter: " << letra << endl;
    cout << "Texto: " << texto << endl;
    cout << "Valor booleano: " << esVerdadero << endl;

    // ENTRADA DE DATOS
    int edad;
    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << "Tu edad es: " << edad << endl;

    return 0;
}