using System;

namespace Csharp
{
    class Program
    {
        static void Main(string[] args)
        {

            do
            {
                Console.WriteLine("Hello World!");
                Console.WriteLine("Podaj imie");
                string imie = Console.ReadLine();
                Console.WriteLine("Witaj " + imie);
                Console.ReadKey();
                Console.Clear();
            } while (true);
                
            
            

 
        }
    }


}