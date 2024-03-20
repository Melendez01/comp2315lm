
/*Para mostrar un ejemplo sencillo de cómo usar try y catch en C++ a los estudiantes, 
podemos crear un programa que solicite al usuario que ingrese dos números y 
luego intente dividir el primer número por el segundo. Utilizaremos un bloque try 
para intentar la operación de división y un bloque catch para manejar el caso en el que el usuario intente dividir por cero, lo cual no es permitido en matemáticas y causaría un error en tiempo de ejecución.
*/

#include <iostream>
using namespace std;

int main() 
{
    int numerador, denominador, resultado;

    cout << "Ingrese el numerador: ";
    cin >> numerador;

    cout << "Ingrese el denominador: ";
    cin >> denominador;

    try 
    {
        if (denominador == 0) 
        {
            throw "División por cero no permitida."; //mensaje que describe el problema
        }
        resultado = numerador / denominador;

        cout << "Resultado: " << resultado << endl;
    } 
    catch (const char* mensaje) 
    {
        cout << "Excepción capturada: " << mensaje << endl;
    }

    return 0;
}