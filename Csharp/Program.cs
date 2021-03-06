﻿using System;

namespace Csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Pies pies = new Pies("pikus");
            pies.Przywitanie();
            pies.WypiszPodanyTekst("rufi");
            Pies pies1 = new Pies("pikus");
            Pies pies2 = new Pies("padvs");
            Pies pies3 = new Pies("pasdkus");
            Pies pies4 = new Pies("piasvs");

            Console.WriteLine(Pies.ilosc);




            //ZabawyNasze();
        }

        /// <summary>
        /// naszew zabawy z podstawowymi rzeczami
        /// </summary>
        private static void ZabawyNasze()
        {
            for (; ; )
            {
                Console.WriteLine("Hello World!");
                Console.WriteLine("Podaj imie");
                string imie = Console.ReadLine();

                if (imie == "exit")
                    break;

                switch (imie)
                {
                    case "adam":
                        Console.WriteLine(imie + " witaj");
                        break;

                    case "tomek":
                        Console.WriteLine(2 + 5 * 8);
                        break;
                    default:
                        Console.WriteLine("Witaj " + imie);
                        break;
                }

                for (int i = 0; i < 10; i++)
                {
                    Console.WriteLine(i);
                }

                Console.ReadKey();
                Console.Clear();
            }

            Stan stan = Stan.Otwarte;


            switch (stan)
            {
                case Stan.Otwarte:
                    Console.WriteLine("stan jest otwarty");
                    break;
                case Stan.Zamkniete:
                    Console.WriteLine("stan jest zamkniety");
                    break;
                case Stan.Nieokreslone:
                    Console.WriteLine("stan jest nieokreslony");
                    break;
                default:
                    break;
            }
        }
    }

    enum Stan
    {
        Otwarte,
        Zamkniete,
        Nieokreslone
    }
}