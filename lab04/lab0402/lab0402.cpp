// 10

#include <iostream>
using namespace std;
int main()
{
    int a[100], b[100];
    int i, max;
    srand((unsigned)time(NULL));
    for (int i = 1; i < 100; i++)
    {
        a[i] = 100 * rand() / RAND_MAX;
        max = a[0];
    }

    for (i = 0; i < 100; i++)
    {
        max = a[i];
    }
    cout << "MAX=";
    cout << max << "\n";
    for (i = 0; i < 100; i++)
    {
        if (a[i] != max)
            b[i] = a[i] = 0;
        else
            b[i] = a[i] = 1;
        cout << b[i];
    }
    
    

}





