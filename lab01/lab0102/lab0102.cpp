// Староруські неметричні одиниці довжини: 1 верста = 500 саженів; 1 сажень = 3 аршина; 1аршин = 16 вершків; 1 вершок = 44, 45 мм.Довжина деякого відрізка складає P метрів. Перевести її в староруську неметричну систему.

#include <iostream>
using namespace std;
int main()
{
	// а - метри, b - вершок, с - аршин, d - сажень, е - верст;
	double a; cin >> a;
	double b = a / 0.04445;
	double c = b * 16;
	double d = c * 3;
	double e = d * 500;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	return 0;
}


