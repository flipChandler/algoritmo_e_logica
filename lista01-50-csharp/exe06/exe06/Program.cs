using System;

namespace exe06
{
    class Program
    {
        static void Main(string[] args)
        {
            double celsius = 0, fahr;
            Console.WriteLine("Digite a tempearatura em graus Celsius");
            celsius = float.Parse(Console.ReadLine());
            fahr = celsius * (9.0 / 5.0) + 32.0;
            Console.WriteLine("A temperatura em graus Fahrenheit é {0}", fahr);
            Console.ReadKey();

        }
    }
}
