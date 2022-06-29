#include <iostream>
using namespace std;
int main()
{
	float fact=1,n, num;
	cout << "Enter a number you want to find the factorial of ";
	cin >> num;
	n = 1;
	for (int i = num; i>=n ; i--)
	{
		fact = fact*i;
	}
	cout << fact << endl;
	return 0;
}
 