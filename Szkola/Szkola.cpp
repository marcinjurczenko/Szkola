﻿#include <iostream>
#include "Szkola.h"
using namespace std;

int main()
{
    Przywitanie();
    Obliczenia();
}

void Obliczenia()
{
    while (true)
    {
        int liczba1;
        int liczba2;
        int wynik;
        int wyjscie = Menu();

        if (wyjscie == 0)
        {
            break;
        }

        switch (wyjscie)
        {
        case 1:
            PobranieDwochLiczb(liczba1, liczba2);
            wynik = Dodawanie(liczba1, liczba2);
            WyswietlenieWyniku(wynik);
            Czyszczenie();
            break;
        case 2:
            PobranieDwochLiczb(liczba1, liczba2);
            wynik = Odejmowanie(liczba1, liczba2);
            WyswietlenieWyniku(wynik);
            Czyszczenie();
            break;
        case 3:
            PobranieDwochLiczb(liczba1, liczba2);
            wynik = Mnozenie(liczba1, liczba2);
            WyswietlenieWyniku(wynik);
            Czyszczenie();
            break;
        case 4:
            PobranieDwochLiczb(liczba1, liczba2);
            wynik = Dzielenie(liczba1, liczba2);
            WyswietlenieWyniku(wynik);
            Czyszczenie();
            break;
        case 5:
            PobranieLiczby(liczba1);
            Odliczanie(liczba1);
            Czyszczenie();
            break;
        case 6:
            Rysunek();
            break;
        case 7:
            Rysunek();
            break;
        default:
            break;
        }
    }
}


/// <summary>
/// wyswietla wynik
/// </summary>
/// <param name="wynik"></param>
void WyswietlenieWyniku(int wynik)
{
    cout << "wynik operacj to: " << wynik << endl << endl;
}


void Rysunek()
{
    cout << endl;
    cout << "***    ***\n";
    cout << "**     ***\n";
    cout << "          \n";
    cout << "**      **\n";
    cout << " ******** \n" << endl;
}
/// <summary>
/// pobranie 1 liczby
/// </summary>
/// <param name="liczba1"></param>
void PobranieLiczby(int& liczba1)
{
    cout << "podaj liczbe: ";
    cin >> liczba1;
}

/// <summary>
/// pobranie dwoch liczb
/// </summary>
/// <param name="liczba1"></param>
/// <param name="liczba2"></param>
void PobranieDwochLiczb(int& liczba1, int& liczba2)
{
    cout << "podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "podaj druga liczbe: ";
    cin >> liczba2;
}

/// <summary>
/// Dodawanie 2 liczb
/// </summary>
/// <param name="liczba1"></param>
/// <param name="liczba2"></param>
/// <returns>wynik</returns>
int Dodawanie(int liczba1, int liczba2)
{
    int wynik = liczba1 + liczba2;
    return wynik;
}

/// <summary>
/// Odejmowanie 2 liczb
/// </summary>
/// <param name="liczba1"></param>
/// <param name="liczba2"></param>
/// <returns>wynik</returns>
int Odejmowanie(int liczba1, int liczba2)
{
    int wynik = liczba1 - liczba2;
    return wynik;
}

/// <summary>
/// Mnozenie 2 liczb
/// </summary>
/// <param name="liczba1"></param>
/// <param name="liczba2"></param>
/// <returns>wynik</returns>
int Mnozenie(int liczba1, int liczba2)
{
    int wynik = liczba1 * liczba2;
    return wynik;
}

/// <summary>
/// Dzielenie 2 liczb
/// </summary>
/// <param name="liczba1"></param>
/// <param name="liczba2"></param>
/// <returns>wynik</returns>
int Dzielenie(int liczba1, int liczba2)
{
    int wynik = liczba1 / liczba2;
    return wynik;
}

void Odliczanie(int liczba1)
{
    for (int i = 1; i <= liczba1; i++)
    {
        cout << i << endl;
    }
}

int Menu()
{
    int wyjscie;
    cout << "MENU:\n";
    cout << "*Dodawanie - 1\n";
    cout << "*Odejmowanie - 2\n";
    cout << "*Mnozenie - 3\n";
    cout << "*Dzielenie - 4\n";
    cout << "*Odliczanie - 5\n";
    cout << "*:) - 6\n";
    cout << "*Wyjscie - 0\n";
    
    cin >> wyjscie;

    return wyjscie;
}

/// <summary>
/// Pyta o imie i wita sie
/// </summary>
void Przywitanie()
{
    string imie;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << endl << "Witaj " << imie << "!" << endl << endl;
}

/// <summary>
/// czysci okno
/// </summary>
void Czyszczenie()
{
    cout << "wpisz dowolny znak i nacisnij enter...";
    char temp;
    cin >> temp;
    system("cls");
}

