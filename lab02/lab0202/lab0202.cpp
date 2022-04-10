
// 7

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double x, a = 0, b = 0, c = 0;
	cin >> x;
	a = tan(x);
	b = abs(x);
	c = pow(1 + x * x, 4);
	cout << a << "\n";
	cout << b << "\n";
	cout << c << "\n";
}