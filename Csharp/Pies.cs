using System;

namespace Csharp
{
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

        public void WypiszPodanyTekst(string imie)
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