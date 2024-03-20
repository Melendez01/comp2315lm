#include <iostream>
using namespace std;

int main()
{
    double radio;
    double area;
    const double PI = 3.14;

    cout << "Ingrese la medida del radio: ";
    cin >> radio;

    area = PI * radio * radio;

    cout <<"El area del círculo es: " << area<<endl;

    return 0;

}