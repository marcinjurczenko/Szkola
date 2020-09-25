using System;

namespace Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            Pies pikus = new Pies("pikus");
            Pies pikus1 = new Pies("rufi");
            Pies pikus2 = new Pies("sada");
            Pies pikus3 = new Pies();
            pikus.PodajImie("pikus");
            Pies.WypiszTekst("world");
            Console.WriteLine(Pies.ilosc);
            pikus3.Przywitanie();
        }
    }


}