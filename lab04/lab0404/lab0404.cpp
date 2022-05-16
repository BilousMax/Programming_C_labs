// 9

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int a[100][100], i, j, m, n;
    cout << "Введiть кiлькiсть рядкiв i стовпцiв (матриця має бути квадратною):" << endl;
    cout << "Кiлькiсть рядкiв = ";
    cin >> m;
    cout << "Кiлькiсть стовпцiв = ";
    cin >> n;
    srand((unsigned)time(NULL));
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            a[i][j] = 100 * rand() / RAND_MAX;
        }

    }
    cout << "Матриця : " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(5) << a[i][j];
        cout << endl;
    }
    int max_i = 0, max_j = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] > a[max_i][max_j])
            {
                max_i = i; max_j = j;
            }
    cout << "Максимальний елемент бiчної дiагоналi\n";
    cout << a[max_i][max_j];
}