using System;

namespace exe17
{
    class Program
    {
        static void Main(string[] args)
        {
            double centimetros = 0, polegadas;
            Console.WriteLine("Digite o comprimento em centimetros:");
            centimetros = double.Parse(Console.ReadLine());
            polegadas = centimetros / 2.54;
            Console.WriteLine("O comprimento em polegadas é {0}", Math.Round(polegadas, 2));
            Console.ReadKey();

        }
    }
}
