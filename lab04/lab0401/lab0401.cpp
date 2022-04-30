// 13
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ukr");
    int a[30], b[30];
    srand((unsigned)time(NULL));
    for (int i = 1; i <= 30; i++)
    {
        a[i] = 100. - ((double)rand() / RAND_MAX) * 200.; 
    }
        
        for (int i = 1; i <= 30; i++)
        {
            b[i] = 100. - ((double)rand() / RAND_MAX) * 200.;
        }
        // заповнив a[i] та b[i] випадковими числами від -100 до 100
        int R1 = 0, R2 = 0;
        for (int i = 1; i <= 15; i++)
        {
            R1 = R1 + (a[2 * i - 1] + b[2 * i - 1]);
            R2 = R2 + (a[2 * i] + b[2 * i]);
        }
        int Rez;
        Rez = R1 / R2;
        cout << Rez << endl;
        
    }

