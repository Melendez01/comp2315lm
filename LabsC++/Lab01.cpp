#include <iostream>
#include <string>
using namespace std;

int main() {
    int entero;
    float flotante;
    char caracter;
    string cadena;
    
    cout << "Ingrese un número entero: ";
    cin >> entero;
    
    cout << "Ingrese un número flotante: ";
    cin >> flotante;

    cout << "Ingrese un carácter: ";
    cin >> caracter;

    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore();       // ignorar el '\n' dejado por cin >> caracter
    getline(cin, cadena); //
    
    cout <<" ";
    cout <<"-----------------------------------------------------\n";

     cout << "El número entero ingresado es: " << entero << endl;
     cout << "El número flotante ingresado es: " << flotante << endl;
     cout << "El carácter ingresado es: " << caracter << endl;
     cout << "La cadena ingresada es: " << cadena << endl;

    return 0;
}
