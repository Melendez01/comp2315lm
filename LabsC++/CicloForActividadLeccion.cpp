#include <iostream>
#include <string>
using namespace std;

int main() 
{
    double sumaCalificaciones = 0; // Ahora es double
    double promedio;
    string nombreEstudiante;
    int calificacionEstudiante;
    int numeroEstudiantes;

    cout << "Ingrese la cantidad total de estudiantes (max 10): ";
    cin >> numeroEstudiantes;

    if (numeroEstudiantes > 10 || numeroEstudiantes <= 0) {
        cout << "El número de estudiantes debe ser un valor positivo y no mayor a 10." << std::endl;
        return 1;
    }

    for (int i = 1; i <= numeroEstudiantes; ++i) 
    {
        cout << "Estudiante #" << i << ":" << endl;
        cout << "Ingrese el nombre del estudiante: ";
        cin >> nombreEstudiante; // Asumiendo que los nombres no contienen espacios
        cout << "Ingrese la calificación de " << nombreEstudiante << ": ";
        cin >> calificacionEstudiante;

        sumaCalificaciones += calificacionEstudiante; // Se acumula en sumaCalificaciones que ahora es double
    }

    promedio = sumaCalificaciones / numeroEstudiantes;

    cout << "El promedio general de las calificaciones del grupo es: " << promedio << endl;

    return 0;
}

