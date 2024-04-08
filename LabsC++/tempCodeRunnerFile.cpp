#include <iostream>
using namespace std;

int main()
{
    int suma = 0; //Valor inicial de la variable que es el acumulador 

    for (int i = 1; i <= 10; i++) 
    {
        suma = suma + i;
    }

    cout << "La suma de los números del 1 al 10 es: " << suma;

    return 0;

}