#include <iostream>
#include "Szkola.h"
using namespace std;

int main()
{
    while (true)
    {
        int wyjscie = Menu();

        if (wyjscie == 2) 
        {
            break;
        }

        Przywitanie();

        Czyszczenie();
    }
}



int Menu()
{
    int wyjscie;
    cout << "MENU :\n";
    cout << "cyfra - przywitanie\n";
    cout << "2 - wyjscie\n";
    cin >> wyjscie;

    return wyjscie;
}

void Przywitanie()
{
    string imie;
    cout << "Podaj swoje Imie : ";
    cin >> imie;
    cout << "Twoje imie to : " << imie << endl;
}

void Czyszczenie()
{
    cout << "press any key to exit...";
    char temp;
    cin >> temp;
    system("cls");
}

