/*
    Un grupo de amigos decide organizar un juego de estrategia, para lo cual forman dos 
    equipos de 6 integrantes cada uno, donde un integrante de cada equipo es el “jefe” y 
    los otros 5 son sus “oficiales”. La regla más importante del juego es que sólo se 
    comunicarán mediante un canal común, por lo que deben buscar la forma de ocultar el 
    contenido de sus mensajes. 
    
    
    Uno de los equipos decide utilizar un método antiguo de 
    encriptación llamado “la cifra del césar”, que consiste en correr cada letra del 
    mensaje –considerando la posición de cada una en el alfabeto– una determinada cantidad 
    de lugares. Ejemplo: si el corrimiento es de 2 lugares, la palabra “ATAQUE” se 
    transforma en “CVCSWG”.
    Cada día, el “jefe” del equipo debe enviar un mensaje a cada uno de sus oficiales. 
    Escribir un programa que permita encriptar los 5 mensajes. El corrimiento 
    (cantidad de lugares que se correrán las letras) será dado por el usuario antes de 
    comenzar a encriptar. Los 5 mensajes usarán el mismo corrimiento.
    Nota: si el alfabeto termina antes de poder correr la cantidad de lugares necesarios, 
    se vuelve a comenzar desde la letra “a”. Ejemplo: la palabra “EXTRA” corrida 3 lugares 
    se convierte en “HAWUD”. Utilizando el alfabeto español, de 27 letras, el siguiente 
    cálculo matemático permite volver a comenzar por el principio una vez que se llegó a 
    la “z”: (índice de la letra a correr+corrimiento)%27
    Sólo se encriptarán las letras de los mensajes, dejando al resto de caracteres sin 
    modificación
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string alfabeto = "abcdefghijklmnñopqrstuvwxyz"; // 27 letras
    // Como 'ñ' ocupa 2 bytes en UTF-8, usamos un array de strings
    string letras[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m",
                       "n","ñ","o","p","q","r","s","t","u","v","w","x","y","z"};
    int totalLetras = 27;

    int corrimiento;
    cout << "Ingrese el corrimiento: ";
    cin >> corrimiento;
    cin.ignore();

    for (int i = 0; i < 5; i++) {
        string mensaje;
        cout << "Ingrese el mensaje a encriptar: ";
        getline(cin, mensaje);

        string encriptado = "";
        int j = 0;
        while (j < mensaje.size()) {
            // Extraer caracter (puede ser 1 o 2 bytes por la ñ)
            string caracter = "";
            unsigned char byte = mensaje[j];
            if (byte < 128) {
                caracter += mensaje[j];
                j++;
            } else {
                caracter += mensaje[j];
                caracter += mensaje[j + 1];
                j += 2;
            }

            // Buscar en alfabeto
            string caracterLower = "";
            for (char c : caracter) {
                caracterLower += tolower(c);
            }

            int indice = -1;
            for (int k = 0; k < totalLetras; k++) {
                if (letras[k] == caracterLower) {
                    indice = k;
                    break;
                }
            }

            if (indice != -1) {
                indice = (indice + corrimiento) % totalLetras;
                encriptado += letras[indice];
            } else {
                encriptado += caracter;
            }
        }

        cout << encriptado << endl;
    }

    return 0;
}