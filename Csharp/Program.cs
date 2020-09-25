using System;

namespace Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            for (;;)
            {
                Console.WriteLine("Hello World!");
                Console.WriteLine("Podaj imie");
                string imie = Console.ReadLine();
                Console.WriteLine("Witaj " + imie);

                for (int i = 0; i < 10; i++)
                {
                    Console.WriteLine(i);
                }

                Console.ReadKey();
                Console.Clear();
            }
        }
    }
}