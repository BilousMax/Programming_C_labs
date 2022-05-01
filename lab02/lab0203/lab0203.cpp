// 3
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    
    float f, a = 0;
    cout << "ENTER a: ";
    cin >> a;
    if (a < -1)
        f = 0;
    else
        if (a < 1)
            f = sqrt(1 - pow(a, 2));
        else 
            f = a - 1;
    cout << "RESULT\n f= " << f;
}

