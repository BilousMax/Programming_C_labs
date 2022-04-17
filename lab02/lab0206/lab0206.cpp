// варіант 10

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double x = 0;
	int i, n;
	cout << "Введiть n\n";
	cin >> n;
	for ( i = 1; i <= n; i++)
	{
		x = (sin(1) * sin(1 + 2) * sin(1 + 2 + n));
	}
	cout << x;
}


