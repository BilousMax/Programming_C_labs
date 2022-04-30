// 10

#include <iostream>
using namespace std;
main()
{
    int a[100], b[100];
    int i, max;
    for (i = 0; i < 100; i++)
        ;
    max = a[0];
    for (i = 0; i < 100; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    for (i = 0; i < 100; i++)
    {
        if (a[i] != max)
            b[i] = 0;
        else
            b[i] = 1;
        cout << b[i];
    }
    return 0;
}



