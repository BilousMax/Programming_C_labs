// 11

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, a, sum = 0;
	cout << "n= ";
	cin >> n;
	for (int i = 0; i < n; i++) {

		cout << " a = ";
		cin >> a;
	}
	for (int j = 1; j <= n; j++) {
		sum = sum + (a/j);
	}
	cout << sum;
}


