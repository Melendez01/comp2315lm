#include <iostream>
using namespace std;

int main()
{
    float numero;
    int entero;

    cout <<"Ingrese un numero entero: ";
    cin >> numero;

    entero = numero;

    try
    {
        if(numero != entero)
        {
            throw "El numero ingresado no es un entero.";
        }

        cout << "El numero entero ingresado es: " << numero << endl;

    }
    catch (const char* mensaje)
    {
        cout << "Excepcion capturada: " << mensaje << endl;
    }

    return 0;
}