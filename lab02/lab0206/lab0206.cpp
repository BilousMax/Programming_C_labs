// варіант 10

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	int i, n;
	float sum = 1;
	cout << "Введiть n\n";
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		sum = sum * sin(i + n);
	}
	cout << sum;
}


