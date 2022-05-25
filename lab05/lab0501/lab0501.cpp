// 3

#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char str[50];
    int i, n_a, n_o;
    setlocale(LC_CTYPE, "ukr");
    cout << "Текст : ";
    cin >> str;
    n_a = 0;
    n_o = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
            n_a++;
        
        if (str[i] == 'o')
            n_o++;
        
    }
    if (n_a > n_o)
        cout << "Бiльше символiв А\n";
    else if (n_o > n_a)
        cout << "Бiльше символiв О\n";
    if (n_a == 0)
        cout << "Символ А не найдено\n";
    if (n_o == 0)
        cout << "Символ О не найдено\n";
    cout << "A-" << n_a << endl;
    cout << "O-" << n_o;
}