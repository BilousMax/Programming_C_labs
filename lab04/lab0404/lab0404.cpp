// 9

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ukr");
    int n,i,j,a[10][10];
    cin >> n;
    srand((unsigned)time(NULL));
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = 300 * rand() / RAND_MAX;


            cout << " \t" << a[i][j];
        }

    }
    int max = a[0][0];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] > a[0][0])
                max = a[i][j];
            else
                max != a[i][j];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (max = n + 1)
                max = a[i][j];
            else
                max != a[i][j];
    cout << "\n\t";
    cout << " \t" << max;
    
}


