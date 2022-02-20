// Швидкість човна в стоячій воді V км/год, швидкість течії річки U км/год (U<V). Час руху човна по озеру T1 год, а по річці(проти течії) – T2 год.Визначити шлях S, пройдений човном.
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	int speed, speed_techii, time_ozero, time_techia, S_ozero, S_techia; cout << endl;
	A:	cout << "Введіть швидкість човна"; cin >> speed; cout << endl;
		cout << "Введіть швидкість течії"; cin >> speed_techii; cout << endl;
		cout << "Введіть час руху човна по озеру"; cin >> time_ozero; cout << endl;
		cout << "Введіть час руху човна проти течії"; cin >> time_techia; cout << endl;
	if (speed_techii<=speed)
	{
		S_ozero=time_ozero*speed;
		S_techia = speed_techii * time_techia;
		cout << "Шлях пройдений човном" << S_ozero+S_techia << "км.\n";
	}
	else
	{
		cout << "Швидкість течії мусить бути меншою за швидкість човна\n";
		goto A;
	}
}

