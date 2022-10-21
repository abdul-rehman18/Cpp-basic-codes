#include <iostream>
using namespace std;
int main4()
{
	int val, inch, cm, gal, ltr, mile, km, oun, pd;
	float Faren, Cel;
	char con;
	cout << "Please enter a value here ";
	cin >> val;
	cout << " What type of conversion do you want to perform on this value" << endl;
	cout << " I , CM , G , L , M , K , P , O , F , C" << endl;
	cout << "Please enter the conversion symbol here ";
	cin >> con;
	switch (con)
	{
	case 'I' :
		cout << "1 inch = 2.54 cm" << " So value of conversion is " << val*2.54 << " cm" << endl;
		break;
	case 'CM':
		cout << "1 centimeter = 0.393701 inch" << " So value of conversion is " << val*0.393701 << " inch" << endl;
		break;
	case 'G':
		cout << "1 gallon = 3.78541 liter" << " So value of conversion is " << val*3.78541 << " ltr" << endl;
		break;
	case 'L':
		cout << "1 liter = 0.264172 gallon" << " So value of conversion is " << val*0.264172 << " gal" << endl;
		break;
	case 'M':
		cout << "1 mile = 1.60934 kilometer" << " So value of conversion is " << val*1.60934 << " km" << endl;
		break;
	case 'K': 
		cout << "1 kilometer = 0.621371 mile" << " So value of conversion is " << val*0.621371 << " mile" << endl;
		break;
	case 'P':
		cout << "1 pound = 0.453592 kilogram" << " So value of conversion is " << val*0.453592 << " kg" << endl;
		break;
	case 'O':
		cout << "1 pound = 16 ounce" << " So value of conversion is " << val*16 << " ounce" << endl;
		break;
	case 'F':
		cout << "c = (f - 32) * (5 / 9)]" << " So value of conversion is " << (val - 32) * 5/9 << " C" << endl;
		break;
	case 'C':
		cout << " f = c * (9 / 5) + 32" << " So value of conversion is " << val * 1.8 + 32 << " F" << endl;
		break;
	default: 
		cout << "Please enter a valid symbol or in capital letter " << endl;
	}
	return 0;
}