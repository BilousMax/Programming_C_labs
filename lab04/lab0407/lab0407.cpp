// 7

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int a[25][25], i, j, m, n;
    cout << "Введiть кiлькiсть рядкiв i стовпцiв :" << endl;
    cout << "Кiлькiсть рядкiв = ";
    cin >> m;
    cout << "Кiлькiсть стовпцiв = ";
    cin >> n;
    srand((unsigned)time(NULL));
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = 300 * rand() / RAND_MAX;
        }

    }
    cout << "Матриця : " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(5) << a[i][j];
        cout << endl;
    }
    cout << "Транспонована матриця : " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            cout << setw(5) << a[j][i];
        cout << endl;
    }
}

