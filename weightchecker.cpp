#include <iostream>
using namespace std;
int main2()
{
	int weight ;
	float BMI, height;
	cout << "Please enter your weight in kg: ";
	cin >> weight;
	cout << "Please enter your height in meters: ";
	cin >> height;
	BMI = weight / (height * height);
	cout << "Your Body Mass Index is " << BMI << endl;
	if (BMI <= 18.5)
		cout << "healthy" << endl;
	else if (BMI >= 18.5 && BMI <= 24.9)
		cout << "Normal" << endl;
	else if (BMI >= 24.9 && BMI <= 29.9)
		cout << "Overweight" << endl;
	else
		cout << "Obese" << endl;
	return 0;
}
