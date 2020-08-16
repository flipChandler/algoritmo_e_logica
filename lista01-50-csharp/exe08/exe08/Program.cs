using System;

namespace exe08
{
    class Program
    {
        static void Main(string[] args)
        {
            double kelvin = 0, celsius;
            Console.WriteLine("Digite a temperatura em graus Kelvin:");
            kelvin = double.Parse(Console.ReadLine());
            celsius = kelvin - 273.15;
            Console.WriteLine("A temperatura convertida para Celsius é {0}", celsius);
            Console.ReadKey();
            
        }
    }
}
