#include <iostream>
#include "Szkola.h"
using namespace std;

int main()
{
    Przywitanie();

    while (true)
    {
        int liczba1;
        int liczba2;
        int wyjscie = Menu();

        if (wyjscie == 0) 
        {
            break;
        }

        if (wyjscie == 1)
        {
            PobranieDwochLiczb(liczba1, liczba2);

            int wynik = Dodawanie(liczba1, liczba2);

            cout << "wynik dodawania to: " << wynik << endl << endl;

            Czyszczenie();
        }

        if (wyjscie == 2)
        {
            PobranieDwochLiczb(liczba1, liczba2);

            int wynik = Odejmowanie(liczba1, liczba2);

            cout << "wynik odejmowania to: " << wynik << endl << endl;

            Czyszczenie();
        }

        if (wyjscie == 3)
        {
            PobranieDwochLiczb(liczba1, liczba2);

            int wynik = Mnozenie(liczba1, liczba2);

            cout << "wynik mnozenia to: " << wynik << endl << endl;

            Czyszczenie();
        }

        if (wyjscie == 4)
        {
            PobranieDwochLiczb(liczba1, liczba2);

            int wynik = Dzielenie(liczba1, liczba2);

            cout << "wynik dzielenia to: " << wynik << endl << endl;

            Czyszczenie();
        }

    }
}

void PobranieDwochLiczb(int& liczba1, int& liczba2)
{
    cout << "podaj pierwsza liczbe: ";
    cin >> liczba1;
    cout << "podaj druga liczbe: ";
    cin >> liczba2;
}

int Dodawanie(int liczba1, int liczba2)
{
    int wynik = liczba1 + liczba2;
    return wynik;
}

int Odejmowanie(int liczba1, int liczba2)
{
    int wynik = liczba1 - liczba2;
    return wynik;
}

int Mnozenie(int liczba1, int liczba2)
{
    int wynik = liczba1 * liczba2;
    return wynik;
}

int Dzielenie(int liczba1, int liczba2)
{
    int wynik = liczba1 / liczba2;
    return wynik;
}


int Menu()
{
    int wyjscie;
    cout << "MENU:\n";
    cout << "*Dodawanie - 1\n";
    cout << "*Odejmowanie - 2\n";
    cout << "*Mnozenie - 3\n";
    cout << "*Dzielenie - 4\n";
    cout << "*Wyjscie - 0\n";
    
    cin >> wyjscie;

    return wyjscie;
}

void Przywitanie()
{
    string imie;
    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << endl << "Witaj " << imie << "!" << endl << endl;
}

void Czyszczenie()
{
    cout << "wpisz dowolny znak i nacisnij enter...";
    char temp;
    cin >> temp;
    system("cls");
}

