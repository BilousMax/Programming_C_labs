//Дано два числа. Знайти середнє арифметичне їх квадратів і середнє арифметичне їх модулів.

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, b;
	cin >> a;
	cin >> b;
	cout << (pow(a, 2) + pow(b, 2)) / 2 << endl;
	cout << (abs(a) + abs(b)) / 2 << endl;
	return 0;
}

