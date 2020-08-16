using System;

namespace exe10
{
    class Program
    {
        static void Main(string[] args)
        {
            double kmPorHora=0, mPorSegundo;
            Console.WriteLine("Digite a velocidade em km/h:");
            kmPorHora = double.Parse(Console.ReadLine());
            mPorSegundo = kmPorHora / 3.6;
            Console.WriteLine("A velocidade convertida é {0} m/s", Math.Round(mPorSegundo,2));
            Console.ReadKey();
        }
    }
}
