#include <iostream>
#include <string>
using namespace std;


class Osoba {

private:
    int pesel;      //pole prywatne
    int nr_dowodu;  //pole prywatne

public:
    string imie;        //pole publiczne
    string nazwisko;
    int wiek;
    int wzrost;

    void Przywitanie()  //metoda publiczna
    {
        cout << "Hello I'm " << imie << endl << nazwisko;
    }
};


int main()
{

    Osoba osoba;
    osoba.wiek = 18;
    osoba.wzrost = 178;
    osoba.imie = "Karol";
    osoba.nazwisko = "Nowak";
    osoba.Przywitanie();

    Osoba osoba2;
    osoba2.wiek = 21;
    osoba2.wzrost = 180;
    osoba2.imie = "Tomek";
    osoba2.nazwisko = "Kowal";
    osoba2.Przywitanie();

}
