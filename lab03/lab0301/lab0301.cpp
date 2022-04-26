// 5
#include <iostream>
using namespace std;

int main()
{
    int temp, a = 0, b = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    int *pa = &a;
    int *pb = &b;
    *pa = *pa * 2;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
    cout << "RESULT\n";
    cout << a << endl;
    cout << b << endl;

}
