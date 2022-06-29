#include <iostream>
using namespace std;
int main5()
{
	int p1=0, p2=0;
	cout << "Enter the 1st P and 2nd P move ";
	cin >> p1>> p2;
	if (p1 == 1 && p2 == 1)
		cout << "Draw" << endl;
	else if (p1 == 2 && p2 == 2)
		cout << "Draw" << endl;
	else if (p1 == 3 && p2 == 3)
		cout << "Draw" << endl;
	else if (p1 == 1 && p2 == 2)
		cout << "Player 2 wins" << endl;
	else if (p1 == 3 && p2 == 1)
		cout << "Player 2 wins" << endl;
	else if (p1 == 2 && p2 == 3)
		cout << "Player 2 wins" << endl;
	else if (p1 == 3 && p2 == 2)
		cout << "Player 1 wins" << endl;
	else if (p1 == 2 && p2 == 1)
		cout << "Player 1 wins" << endl;
	else if (p1 == 1 && p2 == 3)
		cout << "Player 1 wins" << endl;
	else
		cout << "Invalid move" << endl;
	return 0;
}