#include <iostream>
#include <string>  // Incluir para manejar strings correctamente

using namespace std;

int main() {
    // Definir el arreglo con 5 nombres de ciudades o países
    string ciudades[5] = {"París", "Tokio", "Nueva York", "Londres", "Sydney"};
    
    // Imprimir los nombres de las ciudades o países
    cout << "Lista de ciudades/países:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Ciudad/País " << i + 1 << ": " << ciudades[i] << endl;
    }

    return 0;
}
