using System;

namespace exe09
{
    class Program
    {
        static void Main(string[] args)
        {
            double celsius = 0, kelvin;
            Console.WriteLine("Digite a tempeartura em gruas Celsius:");
            celsius = double.Parse(Console.ReadLine());
            kelvin = celsius + 273.15;
            Console.WriteLine("A temperatura em graus Kelvin é {0}°", kelvin);
            Console.ReadKey();
        }
    }
}
