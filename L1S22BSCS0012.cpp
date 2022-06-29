#include <iostream>
using namespace std;
int main()
{
	int option;
	cout << "\t\t\t\t THIS PROGRAM IS DEVELOPED BY ABDUL HADI. " << endl << endl;
	cout << "Press [1] - To display specific tables from starting and ending values given by user." << endl;
	cout << "Press [2] - To display first 10 non-negaives whole numbers in desending order." << endl;
	cout << "Press [3] - To calculate factorial of  a number." << endl;
	cout << "Press [4] - To calculate the sum of first 10 odd numbers." << endl;
	cout << "Press [5] - To display whether the input number is prime or not." << endl;
	cout << "Please enter your option here.... ";
	cin >> option;
	switch (option)
	{
	case 1:
	{
			  int val, start, end, prod;
			  cout << "Enter the value to make a table... ";
			  cin >> val;
			  cout << "Enter the starting value... ";
			  cin >> start;
			  cout << "Enter the ending value... ";
			  cin >> end;
			  cout << endl;
			  for (val; start <= end; start++)
			  {
				  prod = val*start;
				  cout << val << " x " << start << " = " << prod << endl;
			  }
			  break;
	}
	case 2:
	{
			  int  b = 9;
			  for (int a = 1; a <= 10; a++)
			  {
				  cout << a << " whole number is " << b << endl;
				  b--;
			  }
			  break;
	}
	case 3:
	{
			  int num, n = 1;
			  double  fac = 1;
			  cout << "Enter the number you want to calculate the factorial of...";
			  cin >> n;
			  for (num = 1; num <= n; ++num)
			  {
				  fac *= num;
			  }
			  cout << fac << endl;
			  break;
	}
	case 4:
	{
			  int a, sum = 0;
			  for (a = 1; a <= 20; a += 2)
			  {
				  sum += a;
				  cout << a << " + ";

			  }
			  cout << " = " << sum << endl;

			  break;
	}
	case 5:
	{
			  int num, i, m = 0, pflag = 0;
			  cout << "Enter the number here... ";
			  cin >> num;

			  if (num == 1 || num == 2) {
				  cout << num << " is a prime number. " << endl;
			  }
			  else if (num <= 0)
			  {
				  cout << num << " is not  a prime number " << endl;
			  }
			  else
				  m = num / 2;
			  {
				  for (i = 2; i <= m; i++)
				  {
					  if (num % i == 0) {
						  cout << num << " not a prime number. " << endl;
						  pflag = 1;
						  break;
					  }
					  if (pflag == 0) {
						  cout << num << " is  a prime number. " << endl;
						  break;
					  }
				  }
			  }
			  break;
	}
	default:
	{
			   cout << "Please enter a valid option." << endl;
	}
	}
	return 0;
}