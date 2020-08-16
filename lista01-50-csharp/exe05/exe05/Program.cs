using System;

namespace exe05
{
    class Program
    {
        static void Main(string[] args)
        {
            float real = 0;
            Console.WriteLine("Digite um numero real:");
            real = float.Parse(Console.ReadLine());
            real /= 5;
            Console.WriteLine("A quinta parte do numero real digitado é {0}", real);
            Console.ReadKey();
        }
    }
}
