#include <iostream>
using namespace std; 
int main1()
{
	float Bsal, hra, da, Tsal ;
	cout << "Please enter your Basic salary here: ";
	cin >> Bsal;
	if (Bsal<=10000)
	{
		hra =  Bsal * 20/100;
		da =  Bsal * 80/100;
		Tsal = Bsal + hra + da;
		cout << "Your Gross salary is " << Tsal << endl;
	}
	else if (Bsal <= 20000)
	{
		hra = Bsal * 25 / 100;
		da = Bsal * 90 / 100;
		Tsal = Bsal + hra + da;
		cout << "Your Gross salary is " << Tsal << endl;
	}
	else if (Bsal > 20000)
	{
		hra = Bsal * 30 / 100;
		da = Bsal * 95 / 100;
		Tsal = Bsal + hra + da;
		cout << "Your Gross salary is " << Tsal << endl;
	}
	else
	{
		cout << "Please enter a valid number " << endl;
	}
	return 0;
}
