/*
    En cierto pais el descuento que se debe pagar por los articulos
    se calcula mediante la siguiente tabla:

        * Los primeros $20 no causan impuestos
        * los siguientes $20 tienen un 30% de descuento y el resto el 40%

    Si el costo del producto es mayor a $500, se le cobra 50% en ves de 40%
*/

#include <iostream>
using namespace std;
main() {
    float costo;
    cout << "Ingresa el costo del articulo: ";
    cin >> costo;

    float descuento = 0;

    if (costo > 500) {
        descuento += (costo - 40) * 0.5;
        descuento += 20 * 0.3;
    } else if (costo > 40) {
        descuento += (costo - 40) * 0.4;
        descuento += 20 * 0.3;
    } else if (costo > 20) {
        descuento += (costo - 20) * 0.3;
    }

    cout << "El descuento es: " << descuento << endl;




return 0;
}