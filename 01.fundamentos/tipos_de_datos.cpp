/*
    Realizar un programa que pida al usuario su información personal:
    - Nombre completo
    - Edad
    - Altura en metros
    - Si es estudiante o no
    Y mostrar al final un resumen con todos los datos ingresados
    usando los diferentes tipos de datos de C++
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Tipos de datos básicos
    string nombre;
    int edad;
    float altura;
    char esEstudiante; // 's' o 'n'

    cout << "=== REGISTRO DE PERSONA ===" << endl;

    cout << "Ingresa tu nombre completo: ";
    getline(cin, nombre); // Para leer cadenas con espacios

    cout << "Ingresa tu edad: ";
    cin >> edad;

    cout << "Ingresa tu altura en metros (ej: 1.75): ";
    cin >> altura;

    cout << "¿Eres estudiante? (s/n): ";
    cin >> esEstudiante;

    cout << "\n=== RESUMEN ===" << endl;
    cout << "Nombre   : " << nombre << endl;
    cout << "Edad     : " << edad << " años" << endl;
    cout << "Altura   : " << altura << " m" << endl;
    cout << "Estudiante: " << (esEstudiante == 's' ? "Sí" : "No") << endl;

    return 0;
}