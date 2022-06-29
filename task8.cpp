#include <iostream>
using namespace std;
int main8()
{
	int a, b, c;
	cout << "Input:" << "" << "" << "";
	cin >> a >> b >> c;
	cout << endl;
	if (a > b && a > c)
	{
		if (b > c)
			cout << b << endl;
		else
			cout << c << endl;
	}
	else if (b > a && b > c)
	{
		if (a > c)
			cout << a << endl;
		else
			cout << c << endl;
	}
	else if (c > a && c > b)
	{
		if (a > b)
			cout << a << endl;
		else
			cout << c << endl;
	}
	return 0;
}