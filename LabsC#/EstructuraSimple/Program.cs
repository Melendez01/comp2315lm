using System;

namespace EstructuraSimple
{
     class Program
    {
        static void Main(string[] args)
        {

        // Solicita al usuario ingresar los años de antigüedad del empleado
        Console.Write("Ingrese los años de antigüedad del empleado:");
        int tiempoAntiguedad = Convert.ToInt32(Console.ReadLine());

        // Determina si el empleado es elegible para el bono
        if (tiempoAntiguedad >= 5)
        {
            Console.WriteLine("El empleado recibirá un bono de $1000.");
        }

        // Si el empleado tiene menos de 5 años, no se muestra ningún mensaje adicional
        if (tiempoAntiguedad < 5)
        {
            Console.WriteLine("El empleado no recibirá el bono.");
        }
        }
    }
}