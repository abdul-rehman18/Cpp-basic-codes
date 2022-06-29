#include <iostream>
using namespace std;
int main7()
{
	int n1= 0, n2= 0, sum= 0, sub= 0, mul = 0;
	float div= 0;
	char opr;
	cout << "Please enter an operation to be performed ";
	cin >> n1 >> opr >> n2;
	if (opr == '+')
	{
		sum = n1 + n2;
		cout << "The sum of 2 numbers are " << sum << endl;
	}
	else if (opr == '-')
	{
		sum = n1 - n2;
		cout << "The subtraction of 2 numbers are " << sum << endl;
	}
	else if (opr == '*')
	{
		sum = n1 * n2;
		cout << "The multiplication of 2 numbers are " << sum << endl;
	}
	else if (opr == '/')
	{
		sum = n1 / n2;
		cout << "The division of 2 numbers is " << sum << endl;
	}
	else if (opr == '%')
	{
		sum = n1 % n2;
		cout << "The modulous of 2 numbers are " << sum << endl;
	}
	
	else
		cout << "Please enter a valid operation" << endl;
	return 0;
}