using System;

namespace exe15
{
    class Program
    {
        static void Main(string[] args)
        {
            double radianos = 0, graus;
            Console.WriteLine("Digite o valor do angulo em radianos:");
            radianos = double.Parse(Console.ReadLine());
            graus = radianos * 180 / Math.PI;
            Console.WriteLine("O angulo convertido para graus é {0}", Math.Round(graus, 2));
            Console.ReadKey();
        }
    }
}
