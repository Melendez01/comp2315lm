#include <iostream>
using namespace std;

int main() 
{
    int tipo_instrumento;

    // Solicitar al usuario que ingrese el tipo de instrumento
    
    cout << "Los isntrumentos son: 1. Guitarra, 2. Piano, 3. Batería, 4. Violín, 5. Flauta:" << endl;
    cout << "Ingrese el tipo de instrumento seleccionado: ";
    cin >> tipo_instrumento;

    // Evaluación del tipo de instrumento usando la estructura switch
    switch (tipo_instrumento) {
        case 1: // Guitarra
            cout << "El descuento es del 10%." << endl;
            break;
        case 2: // Piano
            cout << "El descuento es del 15%." << endl;
            break;
        case 3: // Batería
            cout << "El descuento es del 20%." << endl;
            break;
        case 4: // Violín
            cout << "El descuento es del 12%." << endl;
            break;
        case 5: // Flauta
            cout << "El descuento es del 8%." << endl;
            break;
        default: // En caso de ingresar un número no asociado a ningún instrumento
            cout << "Instrumento no reconocido. Intente de nuevo." << endl;
    }

    return 0;
}
