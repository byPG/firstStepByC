#include <iostream>

using namespace std;

class Event
{
    private: // jeżeli nie wpiszemy to będzie domyślnie -> zapiszę dla pamnięci
    int day, month, year;
    int hour, minutes;
    string name;

    public:
    Event(string="brak",int=1, int=2 ,int=3 ,int=12, int=50 ); //nagłówek konstruktora; wartości domyślne
    ~Event(); //destruktor -> nie może mieć zadnych argumentów dlatego zostawiamy puste nawiasy
    void load();
    void show();
};
