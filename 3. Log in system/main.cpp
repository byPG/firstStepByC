#include <iostream>

using namespace std;

string haslo, login;


int main()
{
    cout << "Podaj login: ";
    cin >> login;

    cout << "Podaj haslo: ";
    cin >> haslo;

    if ((login=="admin") && (haslo == "szarlotka")){
        cout << "Udalo sie zalogowac!";
    } else {
        cout << "Niepoprawny login lub haslo!";
    }




    return 0;
}
