#include <iostream>

using namespace std;

int a,b,c,m;

int main()
{
    cout << "Podaj trzy liczby rozdzielone spacja: " << endl;
    cin >>a>>b>>c;

    m=a;  //algorytm
    if(b>m) m=b;
    if(c>m) m=c;

    cout<<"Najwieksza liczba to " <<m;

    /*if ((a>=b)&&(a>=c))
        cout<<"Najwieksza liczba to: " <<a;

    else if ((b>=a)&&(b>=c))
    cout<<"Najwieksza liczba to: " <<b;

    else if ((c>=a)&&(c>=b))
    cout<<"Najwieksza liczba to: " <<c; */

    return 0;
}
