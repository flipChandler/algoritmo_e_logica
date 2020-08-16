using System;

namespace exe04
{
    class Program
    {
        static void Main(string[] args)
        {
            float real = 0;
            Console.WriteLine("Digite um numero real:");
            real = float.Parse(Console.ReadLine());
            real *= real;
            Console.WriteLine("O quadrado desse numero real é {0}", real);
            Console.ReadKey();
        }
    }
}
