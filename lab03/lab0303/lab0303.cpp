// 2
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	new float;
	float *ptr = new float;
	cin >> *ptr;

	new float;
	float *otherptr = new float;
	cin >> *otherptr;

	*ptr = *ptr * 2;
	cout << "*ptr=" << *ptr;

}


