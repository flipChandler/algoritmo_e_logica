using System;

namespace exe19
{
    class Program
    {
        static void Main(string[] args)
        {
            double litros = 0, metrosCubicos;
            Console.WriteLine("Digite o volume em litros:");
            litros = double.Parse(Console.ReadLine());
            metrosCubicos = litros / 1000;
            Console.WriteLine("O volume em metros cubicos é de {0}", Math.Round(metrosCubicos,2));
            Console.ReadKey();
        }
    }
}
