// 5 

#include <iostream>
using namespace std;
int main()
{
    int temp, a = 0, b = 0;
    cout << "Enter a: \n";
    cin >> a;
    cout << "Enter b: \n";
    cin >> b;
    int *pa = &a;
    int *pb = &b;
    *pa = *pa * 2;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    cout << "RESULT\n";
    cout << "a=";
    cout << a << endl;
    cout << "b=";
    cout << b << endl;
    
}

