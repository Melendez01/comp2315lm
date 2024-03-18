#include <iostream>
#include <cmath> // Libreria para usar la función sqrt()

using namespace std;

int main() {
    double cateto1, cateto2, hipotenusa;

    // Solicitamos al usuario los valores de los catetos
    cout << "Ingrese la longitud del primer cateto: ";
    cin >> cateto1;
    cout << "Ingrese la longitud del segundo cateto: ";
    cin >> cateto2;

    // Calculamos la longitud de la hipotenusa
    hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2)); //utilizamos la función sqrt para calcular la raiz cuadrada

    // Mostramos el resultado
    cout << "La longitud de la hipotenusa es: " << hipotenusa << endl;

    return 0;
}
