#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, prob = 0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe z zakresu od 1..100!" << endl;
    srand(time(NULL));
    liczba = rand()%100 + 1;

    while(strzal!=liczba){
        prob++;

        cout << "Zgadnij jaka (to Twoja "<<prob<<" proba) :";
        cin >> strzal;

        if(strzal == liczba){
            cout<<"Udalo sie! Wygrywasz w " <<prob<< " probie" << endl;
        }else if (strzal < liczba){
            cout << "To za malo"<< endl;
        }else if (strzal > liczba){
            cout<<"To za duzo"<< endl;
        }
    }

    system("pause");

    return 0;
}
