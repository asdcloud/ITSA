#include <iostream>
#include <iomanip>
#include<cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	int r = a % b;

	if (r >= 0)
		cout << a << "/" << b << "=" << a / b << "..." << r << endl;
	else
	{
		int q = a / b;
		if (q < 0)
			q -= 1;
		else
			q += 1;

		r = a - b*q;
		cout << a << "/" << b << "=" << q << "..." << r << endl;
	}
	return 0;
}
