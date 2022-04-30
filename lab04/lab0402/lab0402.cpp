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
        a[i] = 100. - ((double)rand() / RAND_MAX) * 200.;
        max = a[0];
    }
    
    for (i = 0; i < 100; i++)
    {
        max = a[i];
    }
    cout << max<<"\n"; 
    for (i = 0; i < 100; i++)
    {
        if (a[i] != max)
            b[i] = 0;
        else
            b[i] = 1;
    }
    cout<<b[i]; // не можу зрозуміти чому виводиться число -858993460
    
}





