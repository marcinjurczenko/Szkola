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


    class Pies
    {
        public Pies() : this("pies")
        {
        }

        public Pies(string _imie)
        {
            ilosc++;
            imie = _imie;
        }

        public static int ilosc;
        private string imie;

        public void PodajImie(string imie)
        {
            Console.WriteLine(imie);
        }

        public static void WypiszTekst(string tekst)
        {
            Console.WriteLine("Hello " + tekst);
        }

        public void Przywitanie()
        {
            Console.WriteLine("moje imie to " + imie);
        }
    }


}