#include <iostream>
using namespace std;

int main() {
    double totalNomina = 0, totalOvertimePago = 0, totalOvertimeHoras = 0;

    for (int empleado = 0; empleado < 3; empleado++) {
        double horasTrabajadas, pagoPorHora, sueldoBruto, sueldoNeto, pagoOvertime = 0;
        cout << "Ingrese las horas trabajadas por el empleado " << empleado + 1 << ": ";
        cin >> horasTrabajadas;
        cout << "Ingrese el pago por hora del empleado " << empleado + 1 << ": ";
        cin >> pagoPorHora;

        if (horasTrabajadas > 40) {
            double horasExtra = horasTrabajadas - 40;
            pagoOvertime = horasExtra * (pagoPorHora * 2);
            sueldoBruto = (40 * pagoPorHora) + pagoOvertime;
            totalOvertimeHoras += horasExtra;
            totalOvertimePago += pagoOvertime;
        } else {
            sueldoBruto = horasTrabajadas * pagoPorHora;
        }

        sueldoNeto = sueldoBruto * 0.93; // Descuento del 7%
        totalNomina += sueldoNeto;

        cout << "Sueldo bruto del empleado " << empleado + 1 << ": $" << sueldoBruto << endl;
        cout << "Sueldo neto del empleado " << empleado + 1 << ": $" << sueldoNeto << endl;
    }

    cout << "Total pagado en nómina: $" << totalNomina << endl;
    cout << "Total pagado en horas overtime: $" << totalOvertimePago << endl;
    cout << "Total de horas overtime trabajadas: " << totalOvertimeHoras << " horas" << endl;

    return 0;
}
