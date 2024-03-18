#include <iostream>
using namespace std;

int main() 
{
    try 
    {
        int divisor = 0;
        int result = 10 / divisor;  
    } 
    catch (const std::exception& e) 
    {
        cout << "Excepción capturada: " << e.what() << endl;
    }
    return 0;
}
