using System;

namespace Lab01
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Ingrese un número entero: ");
            int entero = int.Parse(Console.ReadLine());

            Console.Write("Ingrese un número flotante: ");
            float flotante = float.Parse(Console.ReadLine());

            Console.Write("Ingrese un carácter: ");
            char caracter = char.Parse(Console.ReadLine());

            Console.Write("Ingrese una cadena de caracteres: ");
            string cadena = Console.ReadLine();

        }
    }
}