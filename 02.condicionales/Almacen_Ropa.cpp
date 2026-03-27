/*
Un almacén de venta de ropa tiene las siguientes promociones para sus clientes,
las cuales consisten en lo siguiente
(pago en efectivo = E, pago con Tarjeta de Crédito = T):

    a. Para ventas menores ó iguales a 100.000, con pago en efectivo,
        se hace un descuento del 20% y si es con tarjeta de crédito, se hace el 10%.
    b. Para ventas mayores a 100.000 y menores o iguales a 200.0000, con pago
        en efectivo, se hace un descuento del 30%, con tarjeta de crédito se hace el 15%.
    c. Para ventas mayores a 200.000, con pago en efectivo, se hace un descuento del 40% y
        con tarjeta de crédito se hace el 20%. Indique el valor del descuento y el
        total a pagar.
*/


#include <iostream>
using namespace std;

void promocion(int n) {
    float compra;
    cout << "Ingrese el valor de su compra: ";
    cin >> compra;

    float descuento = 0;

    if (compra >= 0 && compra <= 1000 && n == 1)
        descuento = compra * 0.2;
    else if (compra >= 0 && compra <= 1000 && n == 2)
        descuento = compra * 0.1;
    else if (compra > 1000 && compra <= 2000 && n == 1)
        descuento = compra * 0.3;
    else if (compra > 1000 && compra <= 2000 && n == 2)
        descuento = compra * 0.15;
    else if (compra > 2000 && n == 1)
        descuento = compra * 0.4;
    else if (compra > 2000 && n == 2)
        descuento = compra * 0.2;
    else {
        cout << "Ingresó un valor incorrecto, vuelva a intentarlo" << endl;
        return;
    }

    cout << "El descuento es: " << descuento << endl;
    cout << "Valor total a pagar: " << compra - descuento << endl;
}

void pago() {
    int opcion;
    cout << "\n------------------------------------------------------------" << endl;
    cout << "-     ¿Con qué medio de pago desea realizar su compra?     -" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "-     1. En efectivo                                        -" << endl;
    cout << "-     2. Tarjeta de Crédito                                 -" << endl;
    cout << "------------------------------------------------------------" << endl;
    cin >> opcion;

    if (opcion == 1)
        promocion(1);
    else if (opcion == 2)
        promocion(2);
    else {
        cout << "Opción incorrecta" << endl;
        pago();
    }
}

int main() {
    pago();
    return 0;
}