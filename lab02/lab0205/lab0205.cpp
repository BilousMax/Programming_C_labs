// варіант 10
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	const char *vidminki[7];
	vidminki[0] = "пустий";
	vidminki[1] = "хто?, що?";
	vidminki[2] = "кого?, чого?";
	vidminki[3] = "кому?, чому?";
	vidminki[4] = "кого?, що?";
	vidminki[5] = "ким?, чим?";
	vidminki[6] = "на кому?, на чому?";
	vidminki[7] = " ";
	int a = 0;
	cout << "Введiть номер вiдмiнку вiд 1 до 7 (1-Називний, 2-Родовий, 3-Давальний, 4-Знахiдний, 5-Орудний, 6-Мiсцевий, 7-Кличний)\n";
	cin >> a;
	for (int i = 0; i < 7; i++) {
		if (i == a) {
			cout << vidminki[i];
		}
	}
	return 0;
}
// виникли проблеми через які не можу вводити позначення відмінків, змушений робити через номери 