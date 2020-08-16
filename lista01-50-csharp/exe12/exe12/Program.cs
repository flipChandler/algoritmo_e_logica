using System;

namespace exe12
{
    class Program
    {
        static void Main(string[] args)
        {
            double milhas, km;
            Console.WriteLine("Digite a distância em milhas");
            milhas = double.Parse(Console.ReadLine());
            km = milhas * 1.609;
            Console.WriteLine("A distância convertida fica em {0} km", Math.Round(km, 2));
            Console.ReadKey();
        }
    }
}
