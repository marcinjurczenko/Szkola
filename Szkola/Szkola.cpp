#include <iostream>
#include "Szkola.h"
using namespace std;

int main()
{
    Przywitanie();
}

void Przywitanie()
{
    string imie;
    cout << "Podaj swoje Imie : ";
    cin >> imie;
    cout << "Twoje imie to : " << imie << endl;
}

