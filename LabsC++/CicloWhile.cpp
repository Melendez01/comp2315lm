#include <iostream>
using namespace std;

int main()
{
    int numero; //Valor inicial de la variable que es el acumulador 

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0) 
    {
        cout << "Has ingresado el numero: " <<numero <<endl;
        cout <<"Ingresa otro numero o 0 para terminar: ";
        cin >> numero;
    }

    cout << "Fin del programa!" <<endl;

    return 0;

}