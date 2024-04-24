using System;

namespace CicloWhile
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Solicitar al usuario que ingrese su nombre
             Console.Write("Entre su nombre: ");
             string nombre = Console.ReadLine();

            // Contador para el ciclo while
            int contador = 0;

            // Ciclo while para imprimir el saludo 10 veces
            while (contador <= 10)
            {
                Console.WriteLine($"Hola {nombre}");
                contador++;  // Incrementar el contador
            }
        }
    }
}