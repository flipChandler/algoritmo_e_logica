using System;

namespace exe11
{
    class Program
    {
        static void Main(string[] args)
        {
            double mPorSegundo = 0, kmPorHora;
            Console.WriteLine("Digite a velocidade em m/s:");
            mPorSegundo = double.Parse(Console.ReadLine());
            kmPorHora = mPorSegundo * 3.6;
            Console.WriteLine("A velocidade é {0} km/h", Math.Round(kmPorHora, 2));
            Console.ReadKey();
        }
    }
}
