// варіант 4

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    float F, a, b, c, x = 0;
    cout << "Введiть число a: \n";
        cin >> a;
        cout << "Введiть число b: \n";
        cin >> b;
        cout << "Введiть число c: \n";
        cin >> c;
        cout << "Введiть число x: \n";
        cin >> x;
        if ((x < 0) && (b!=0)) {
            F = (-a) * x - c;
        }
        else if ((x > 0) && (b == 0)) {
            F = (x - a) / c;
        }
        else {
            F = (b * x) / (c - a);
        }
    cout << F;
}

