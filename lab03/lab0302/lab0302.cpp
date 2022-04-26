// 3
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	long double a, b;
	cout << "Введiть a:\n";
	cin >> a;
	cout << "Введiть b:\n";
	cin >> b;
	long double* pa = &a;
	long double* pb = &b;
	cout << "Середнє арифметичне число\n";
	cout << (*pa + *pb) / 2 << endl;
	cout << "Середнє геометричне\n";
	cout << sqrt(*pa * *pb) << endl;

}

