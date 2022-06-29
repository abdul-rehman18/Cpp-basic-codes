#include <iostream>
using namespace std; 
int main2()
{
	float bill=0, units, remain, surcharge;
	cout << "Please enter your electricity units here: ";
	cin >> units;
	if (units >0)
	{
		bill = bill + 50 * 0.5;
		units = units - 50;
		if (units >= 150)
		{
			bill = bill + 0.75 * 100;
			units -= 100;
			if (units >= 250)
			{
				bill = bill + 1.20 * 100;
				units -= 100;
				if (units > 250)
				{
					bill = bill + 1.50 * units;
				}
				else
				{
					bill = bill + 1.20 * units;
				}
			}
			else
			{
				bill = bill + 0.75 * units;
			}
		}
		else
		{
			bill = bill + 0.50 * units;
		}
	}
	else
	{
		cout << "You haven't used any electicity, are you in a stone age bruv " << endl;
	}
	surcharge = bill * 20 / 100;
	bill = bill + surcharge;
	cout << "Your total bill is " << bill << endl; 
	return 0; 
}
