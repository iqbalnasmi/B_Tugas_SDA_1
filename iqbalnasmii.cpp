#include <iostream>
using namespace std;
int main()
{
    int r,t;
    float phi=3.14;
    float volume;


    cout << "Masukan nilai jari-jari : ";
    cin >> r;

    cout << "Masukan nilai tinggi : ";
    cin >> t;

    volume = phi*r*r*t;
    cout << "Volume tabung adalah : " << volume;

    return 0;
}