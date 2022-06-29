#include <iostream>
using namespace std;
int main3()
{
	int NoChoc, WeiChoc;
	double TotWei;
	char convert;
	cout << "Enter the number of chocolates being sold ";
	cin >> NoChoc;
	cout << "Enter weight of one chocolate in ounces ";
	cin >> WeiChoc;
	cout << "Enter the choice for weighing " << endl;
	cout << "    Enter O to calculate in ounces " << endl << "P for pounds" << endl << "G for grams " << endl << "K for kilograms " << endl;
	cout << "Enter your choice here ";
	cin >> convert; 

		if (convert == 'o' || convert == 'O')
		{
			TotWei = NoChoc * WeiChoc;
			cout << "Weight in Ounces is " << TotWei << endl;
		}

		else if (convert == 'p' || convert == 'P')
		{
			TotWei = NoChoc * WeiChoc / 16;
			cout << "Weight in Pounds is " << TotWei << endl;
		}

		else if (convert == 'g' || convert == 'G')
		{
			TotWei = NoChoc * WeiChoc * 28.349;
			cout << "Weight in Grams is " << TotWei << endl;
		}

		else if (convert == 'k' || convert == 'K')
		{
			TotWei = NoChoc * WeiChoc * 28.349 / 1000;
			cout << "Weight in Kilograms is " << TotWei << endl;
		}

		else
		cout << "Please enter a valid option " << endl;
	
	return 0;
}
