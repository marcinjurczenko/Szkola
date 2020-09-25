using System;

namespace Csharp
{
    class Program
    {
        static void Main(string[] args)
        {

            while (true)
            {
                Console.WriteLine("Hello World!");
                Console.WriteLine("Podaj imie");
                string imie = Console.ReadLine();
                Console.WriteLine("Witaj " + imie);
                Console.ReadKey();
                Console.Clear();
            }
            

 
        }
    }


}