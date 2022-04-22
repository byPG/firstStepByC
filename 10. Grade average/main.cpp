#include <iostream>

using namespace std;

float oceny[5];
float suma, srednia;

int main()
{
    for(int i = 0; i<5 ;i++){
        cout << "Podaj " << i+1 << " ocene: ";
        cin >> oceny[i];
        suma += oceny[i];
    }

    srednia = suma / 5;
    cout << "Srednia ocen wynosi: " << srednia;

    return 0;
}
