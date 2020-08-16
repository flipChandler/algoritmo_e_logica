using System;

namespace exe02
{
    class Program
    {
        static void Main(string[] args)
        {
            float real = 0;
            Console.WriteLine("Digite um numero real:");
            real = float.Parse(Console.ReadLine());
            Console.WriteLine("O real digitado foi => {0}", real.ToString("F"));
            Console.WriteLine("O real digitado foi => {0}", Math.Round(real,2));
            Console.ReadKey();

        }
    }
}
