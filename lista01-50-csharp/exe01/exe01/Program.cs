using System;

namespace exe01
{
    class Program
    {
        static void Main(string[] args)
        {
            int inteiro = 0;
            Console.WriteLine("Digite um numero inteiro:");
            inteiro = int.Parse(Console.ReadLine());
            Console.WriteLine("O inteiro digitado foi o {0}", inteiro);
            Console.ReadKey();
        }
    }
}
