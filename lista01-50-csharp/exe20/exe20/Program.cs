using System;

namespace exe20
{
    class Program
    {
        static void Main(string[] args)
        {
            double quilogramas = 0, libras;
            Console.WriteLine("Digite o valor de massa em quilogramas:");
            quilogramas = double.Parse(Console.ReadLine());
            libras = quilogramas / 0.45;
            Console.WriteLine("O valor de massa em libras é {0}", Math.Round(libras,2));
            Console.ReadKey();

        }
    }
}
