// 1
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int a[6][9], i, j;
    srand((unsigned)time(NULL));
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 9; j++) {
            a[i][j] = 50 * rand() / RAND_MAX;
        }

    }
    cout << "Матриця : " << endl;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
            cout << setw(5) << a[i][j];
        cout << endl;
    }
    int max = a[1][1], I_max = 1;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < 9; j++)
            if (a[i][j] > max)
            {
                max = a[i][j];
                I_max = i;
                
               
                
            }
    int sum = 0;
    for (j = 0; j < 9; j++)
        sum = sum + a[I_max][j];
    cout << "Максимальний елемент : " << max << endl;
    cout << "Сума елементiв рядка : " << sum;

   
    

}

