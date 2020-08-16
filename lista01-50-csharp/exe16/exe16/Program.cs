using System;

namespace exe16
{
    class Program
    {
        static void Main(string[] args)
        {
            double polegadas = 0, centimetros;
            Console.WriteLine("Digite o comprimento em polegadas:");
            polegadas = double.Parse(Console.ReadLine());
            centimetros = polegadas * 2.54;
            Console.WriteLine("O comprimento em centimetros é {0}", centimetros);
            Console.ReadKey();
        }
    }
}
