#include <iostream>
using namespace std;

int main() {
    // Definir el arreglo con 5 elementos y asignar valores directamente
    int array[5] = {1, 2, 3, 4, 5};
    
    // Imprimir los elementos del arreglo
    cout << "Elementos del arreglo:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i + 1 << ": " << array[i] << endl;
    }

    return 0;
}
