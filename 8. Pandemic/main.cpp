#include <iostream>

using namespace std;

int bakteria = 1;
int godzina = 0;

int main()
{

    while(bakteria<=1000000000){

        godzina++;
        bakteria = bakteria*2;

        cout << "Minelo godzina:" << godzina;
        cout << " liczba:" << bakteria<< endl;
    }

    return 0;
}
