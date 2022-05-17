// 9

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int NxM[50][50], i, j, m, n;
    cout << "Введiть кiлькiсть маршрутiв i зупинок " << endl;
    cout << "Кiлькiсть маршрутiв : ";
    cin >> n;
    cout << "Кiлькiсть зупинок : ";
    cin >> m;
    srand((unsigned)time(NULL));
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            NxM[i][j] = 2 * rand() / RAND_MAX;
        }
    }
    cout << "Таблиця : " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << setw(5) << NxM[i][j];
        cout << endl;

    }
    int bus=0;
    for (int i = 0; i < m; i++) {
        
        for (int j = 0; j < n; j++)
        {
            bus += NxM[i][j];
        }
        if (bus == 0) {

            //не зміг зробити
        }

    }
    cout << bus;
}

