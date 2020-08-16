using System;

namespace exe07
{
    class Program
    {
        static void Main(string[] args)
        {
            double fahr = 0, celsius;
            
            Console.WriteLine("Digite a temperatura em graus Fahrenheit:");
            fahr = float.Parse(Console.ReadLine());
            celsius = 5.0 * (fahr - 32.0) / 9.0;
            Console.WriteLine("A temperatura em graus Celsius é {0}", celsius);
            Console.ReadKey();

          
        }
    }
}
