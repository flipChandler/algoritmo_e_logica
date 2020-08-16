using System;

namespace exe13
{
    class Program
    {
        static void Main(string[] args)
        {
            double km = 0, milhas;
            Console.WriteLine("Digite a distância em quilometros:");
            km = double.Parse(Console.ReadLine());
            milhas = km / 1.609;
            Console.WriteLine("A distância convertida é {0} em milhas", Math.Round(milhas, 2));
            Console.ReadKey();
        }
    }
}
