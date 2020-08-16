using System;

namespace exe14
{
    class Program
    {
        static void Main(string[] args)
        {
            double graus = 0, radianos;
            Console.WriteLine("Digite o valor do angulo em graus:");
            graus = double.Parse(Console.ReadLine());
            radianos = graus * Math.PI / 180;
            Console.WriteLine("O angulo convertido em radianos é {0}", radianos);
            Console.ReadKey();
        }
    }
}
