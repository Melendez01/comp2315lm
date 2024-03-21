#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Por favor, introduce un numero entero: ";

    try {
        if (!(cin >> numero)) { // Intenta leer un entero, si falla entra al bloque
            throw "No se introdujo un numero entero."; // Lanza una excepción
        }

        cout << "Numero entero ingresado: " << numero << endl;
    } catch (const char* mensaje) {
        cout << "Error: " << mensaje << endl;
        // No se limpia el estado de cin ni se descarta el resto de la entrada
    }

    return 0;
}
