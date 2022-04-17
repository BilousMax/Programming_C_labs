// 3

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int k, sum = 0;
    double q;
    cout << "k\n";
    cin >> k;
    for (int  q= 1; q < k; q++)
    {
        if (abs(q) < pow(k,2))
        {
            sum=sum+q;
        }
    }
    cout << sum;
}


