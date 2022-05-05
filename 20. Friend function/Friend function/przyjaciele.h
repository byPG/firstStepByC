#include <iostream>

using namespace std;

class Prostokat; // deklaracja klasy ?Prostokat - danie wiedzy klasie Punkt, że klasa Punkt z jej inicjalizacją pojawi się później


class Punkt
{
    string nazwa;
    float x,y;

    public:
    Punkt(string="A", float=0, float=0); //konstruktor z wartościami domyślnymi
    void wczytaj(); //metoda tj. funkcja wewnątrz klasy

    friend void sedzia(Punkt pkt, Prostokat p);  //deklaracja zaprzyjażnienia

};

class Prostokat
{
    string nazwa;
    float x,y,szerokosc,wysokosc;

    public:
    Prostokat(string="brak",float=0, float=0, float=1, float=1);
    void wczytaj();

    friend void sedzia(Punkt pkt, Prostokat p);  //deklaracja zaprzyjażnienia


};
