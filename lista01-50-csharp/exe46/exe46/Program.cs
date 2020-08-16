using System;

namespace exe46
{
    class Program
    {
        static void Main(string[] args)
        {
            int num;
            string numInvertido;            
            Console.WriteLine("Digite um numero inteiro de 3 digitos");
            num = int.Parse(Console.ReadLine());
            numInvertido = num.ToString();

            Console.Write("O numero invertido ficou ");
            for (int i = 2; i >= 0; i--)
            {
                Console.Write( numInvertido[i] );
            }
            Console.ReadKey();            
        }
    }
}
