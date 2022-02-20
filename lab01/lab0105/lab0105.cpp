// 𝑧1 = 𝑠𝑖𝑛𝛼 + 𝑐𝑜𝑠(2𝛽 − 𝛼)/𝑐𝑜𝑠𝛼 − 𝑠𝑖𝑛(2𝛽 − 𝛼)
// 𝑧2 = 1 + 𝑠𝑖𝑛2𝛽/𝑐𝑜𝑠2𝛽

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float a, b, alf, bet, z1, z2;
	cout << "Ввести альфа";
	cin >> alf;
	cout << "Ввести бета";
	cin >> bet;
	a = sin(alf) + cos(2 * bet - alf);
	b = cos(alf) - sin(2 * bet - alf);
	z1 = a / b;
	z2 = (1 + sin(2 * bet)) / cos(2 * bet);
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2;
}
