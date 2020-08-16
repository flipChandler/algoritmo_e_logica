using System;

namespace exe03
{
    class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, num3;

            Console.WriteLine("Digite o 1º numero inteiro:");
            num1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Digite o 2º numero inteiro");
            num2 = int.Parse(Console.ReadLine());
            Console.WriteLine("Digite o 3º numero inteiro");
            num3 = int.Parse(Console.ReadLine());
            num3 += num1 + num2;
            Console.WriteLine("A soma entre os 3 numeros é {0}", num3);
            Console.ReadKey();
        }
    }
}
