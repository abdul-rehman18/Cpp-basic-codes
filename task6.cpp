#include <iostream>
using namespace std;
int main6()
{
	int n1, n2;
	cout << "Please enter first number ";
	cin >> n1;
	cout << "Please enter second number ";
	cin >> n2;
	if (n1%n2 == 0)
		cout << "Multiple" << endl;
	else if (n2%n1 == 0)
		cout << "Multiple" << endl;
	else
		cout << "Not" << endl;
	return 0;
}