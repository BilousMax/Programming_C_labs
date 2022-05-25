// 5

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    setlocale (LC_CTYPE, "ukr");
    auto anagrama = [](string& a,string& b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return includes(a.begin(), a.end(), b.begin(), b.end());
    };
    string s1, s2;
    cout << "Введiть перше слово\n";
    cin >> s1;
    cout << "Введiть друге слово\n";
    cin >> s2;
    cout << boolalpha << anagrama(s1, s2);
   
}


