using System;

namespace exe18
{
    class Program
    {
        static void Main(string[] args)
        {
            double metrosCubicos=0, litros;
            Console.WriteLine("Digite o volume em metros cubicos:");
            metrosCubicos = double.Parse(Console.ReadLine());
            litros = metrosCubicos * 1000;
            Console.WriteLine("O volume em litros é {0}", Math.Round(litros, 2));
            Console.ReadKey();
        }
    }
}
