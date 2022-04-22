#include <iostream>

using namespace std;
int uczniow, cukierkow, x, y;


int main(){

    cout << "Klasa Jasia liczy: ";
    cin >> uczniow;

    cout << "Mama kupila: ";
    cin >> cukierkow;

    x = cukierkow/(uczniow-1);
    cout << "Kazdy uczen otrzymal: " << x << endl;

    y = cukierkow - (uczniow*x);

    cout << "Jasiowi zostanie: " << y;

return 0;
}
