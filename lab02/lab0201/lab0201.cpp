// Дано три дійсних числа X, Y, Z. З трьох даних чисел вибрати максимальне.
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float x, y, z, a, b;
	cout << "Знаходження максимального числа\n";
	cout << "Введіть перше число\n";
	cin >> x;
	cout << "Введіть друге число\n";
	cin >> y;
	cout << "Введіть третє число\n";
	cin >> z;
	if (x >= y)
	{
		a = x;
	}
	else
	{
		a = y;
	}
	if (z >= a)
	{
		b = z;
		cout << "Найбільше число\n" << z;
	}
	else
	{
		b = a;
		cout << "Найбільше число\n" << a;

	}

}



