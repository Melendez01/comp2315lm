using System;

namespace tryCatch
{
    internal class Program
    {
        static void Main(string[] args)
        {
            try 
            {
                int divisor = 0;
                int result = 10 / divisor;
            } 
            catch (DivideByZeroException e) 
            {
            Console.WriteLine("Excepción capturada: " + e.Message);
										 
            }
        }
    
    }
}