#include<iostream>

#include<windows.h>

using namespace std;

int main()

{

	int temp1, temp3, temp4, temp5, i, size = 50, roll = 0, flag = 1, choice2 = 0, index = 0;

	char temp2;

	int roll_no[100] = { 27, 37, 36, 22, 9, 14, 29, 42, 15, 45, 11, 44, 1, 18, 25, 48, 6, 47, 32, 49, 2, 50, 16, 12, 8, 21, 24, 26, 28, 23, 5, 40, 19, 30, 35, 33, 46, 10, 17, 31, 39, 13, 41, 3, 43, 38, 4, 7, 20, 34 };

	int clas[100] = { 4, 5, 6, 7, 8, 4, 5, 6, 7, 8, 4, 5, 6, 7, 8, 4, 5, 6, 7, 8, 4, 5, 6, 7, 8, 4, 5, 6, 7, 8, 4, 5, 6, 7, 8, 4, 5, 6, 7, 8, 4, 5, 6, 7, 8, 4, 5, 6, 7, 8 };

	float mid[100] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 10.5, 11.5, 12.5, 13.5, 14.5, 15.5, 16.5, 17.5, 18.5, 19.5, 20.5, 21.5, 22.5, 23.5, 24.5, 25.5, 26.5, 27.5, 28.5, 29.5, 30.5, 31.5, 32.5, 33.5, 34.5 };

	float final[100] = { 30, 40, 50, 60, 70, 10, 40, 60, 20, 30, 40, 15, 60, 77, 22, 24, 55, 66, 77, 35, 57, 68, 69, 12, 23, 45, 56, 77, 78, 80, 11, 56, 79, 34, 67, 95, 34, 68, 22, 68, 44, 27, 88, 54, 45, 67, 43, 78, 33, 86 };

	float gr = 0;

	char grade[100] = { 0 };

	char choice = '0', key = '0';

	int roll_no2[100], clas2[100], n = 0;

	char grade2[100];

	float mid2[100], final2[100];

	for (int i = 0; i < 50; i++)

	{

		if (final[i] >= 86)

			grade[i] = 'A';

		else if (final[i] >= 73 && final[i] <= 85)

			grade[i] = 'B';

		else if (final[i] >= 60 && final[i] <= 72)

			grade[i] = 'C';

		else if (final[i] >= 50 && final[i] <= 59)

			grade[i] = 'D';

		else if (final[i] < 50)

			grade[i] = 'F';

	}

	system("CLS");

	cout << "Welcome to menue" << endl;

	while (choice != 19)

	{

		system("Color 02");

		cout << "\n\tChoce Operation number" << endl;

		cout << "0 for Displaying the table" << endl;

		cout << "1 for Displaying all the records roll number wise in ascending order" << endl;

		cout << "2 for Displaying all the records roll number wise in descending order" << endl;

		cout << "3 for Displaying all the records in ascending order based on marks in Mid Term" << endl;

		cout << "4 for Displaying all the records in descending order based on marks in Mid Term" << endl;

		cout << "5 for Displaying all the records in ascending order based on marks in Final Term" << endl;

		cout << "6 for Displaying all the records in descending order based on marks in Final Term" << endl;

		cout << "7 for Displaying all the records in ascending order based on Grades" << endl;

		cout << "8 for Displaying all the records in descending order based on Grades" << endl;

		cout << "9 for Adding a new entery of a student" << endl;

		cout << "10 for Deleting a student record based on his\\her Roll Number" << endl;

		cout << "11 for Displaying records of all the students grater than \"X\" marks in final exams" << endl;

		cout << "           (in decending order)" << endl;

		cout << "12 for Displaying records of all the students grater than \"X\" marks in final exams" << endl;

		cout << "           (in ascending order)" << endl;

		cout << "13 for Displaying records of all the students less than or equal to \"X\" marks in final exams" << endl;

		cout << "           (in decending order)" << endl;

		cout << "14 for Displaying records of all the students less than or equal to \"X\" marks in final exams" << endl;

		cout << "           (in ascending order)" << endl;

		cout << "15 for Displaying records of all students greater than \"X\" grades" << endl;

		cout << "           (in descending order)" << endl;

		cout << "16 for Displaying records of all students greater than \"X\" grades" << endl;

		cout << "           (in ascending order)" << endl;

		cout << "17 for Displaying records of all students less than or equal to \"X\" grades" << endl;

		cout << "           (in descending order)" << endl;

		cout << "18 for Displaying records of all students less than or equal to \"X\" grades" << endl;

		cout << "           (in ascending order)" << endl;

		cout << "Input 19 for exit" << endl;

		cin >> choice2;

		system("CLS");

		if (choice2 == 0)

		{

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				// for (int j = i + 1; j < size; j++)

				// {

				// if (roll_no[i] > roll_no[j])

				// {

				// swap(roll_no[i], roll_no[j]);

				// swap(mid[i], mid[j]);

				// swap(final[i], final[j]);

				// swap(grade[i], grade[j]);

				// swap(clas[i], clas[j]);

				// }

				// }

				cout << "   " << roll_no[i] << " \t\t " << final[i] << " \t\t " << mid[i] << " \t   " << clas[i] << "\t    " << grade[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 1)

		{

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				for (int j = i + 1; j < size; j++)

				{

					if (roll_no[i] > roll_no[j])

					{

						temp1 = roll_no[i];

						roll_no[i] = roll_no[j];

						roll_no[j] = temp1;

						temp2 = mid[i];

						mid[i] = mid[j];

						mid[j] = temp2;

						temp3 = final[i];

						final[i] = final[j];

						final[j] = temp3;

						temp4 = grade[i];

						grade[i] = grade[j];

						grade[j] = temp4;

						temp5 = clas[i];

						clas[i] = clas[j];

						clas[j] = temp5;

						// swap(roll_no[i], roll_no[j]);

						// swap(mid[i], mid[j]);

						// swap(final[i], final[j]);

						// swap(grade[i], grade[j]);

						// swap(clas[i], clas[j]);

					}

				}

				cout << "   " << roll_no[i] << " \t\t " << final[i] << " \t\t " << mid[i] << " \t   " << clas[i] << "\t    " << grade[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 2)

		{

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				for (int j = i + 1; j < size; j++)

				{

					if (roll_no[i] < roll_no[j])

					{

						temp1 = roll_no[i];

						roll_no[i] = roll_no[j];

						roll_no[j] = temp1;

						temp2 = mid[i];

						mid[i] = mid[j];

						mid[j] = temp2;

						temp3 = final[i];

						final[i] = final[j];

						final[j] = temp3;

						temp4 = grade[i];

						grade[i] = grade[j];

						grade[j] = temp4;

						temp5 = clas[i];

						clas[i] = clas[j];

						clas[j] = temp5;

						// swap(roll_no[i], roll_no[j]);

						// swap(mid[i], mid[j]);

						// swap(final[i], final[j]);

						// swap(grade[i], grade[j]);

						// swap(clas[i], clas[j]);

					}

				}

				cout << "   " << roll_no[i] << " \t\t " << final[i] << " \t\t " << mid[i] << " \t   " << clas[i] << "\t    " << grade[i] << endl;

			}Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 3)

		{

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				for (int j = i + 1; j < size; j++)

				{

					if (mid[i] > mid[j])

					{

						temp1 = roll_no[i];

						roll_no[i] = roll_no[j];

						roll_no[j] = temp1;

						temp2 = mid[i];

						mid[i] = mid[j];

						mid[j] = temp2;

						temp3 = final[i];

						final[i] = final[j];

						final[j] = temp3;

						temp4 = grade[i];

						grade[i] = grade[j];

						grade[j] = temp4;

						temp5 = clas[i];

						clas[i] = clas[j];

						clas[j] = temp5;

						// swap(roll_no[i], roll_no[j]);

						// swap(mid[i], mid[j]);

						// swap(final[i], final[j]);

						// swap(grade[i], grade[j]);

						// swap(clas[i], clas[j]);

					}

				}

				cout << "   " << roll_no[i] << " \t\t " << final[i] << " \t\t " << mid[i] << " \t   " << clas[i] << "\t    " << grade[i] << endl;

			}Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 4)

		{

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				for (int j = i + 1; j < size; j++)

				{

					if (mid[i] < mid[j])

					{

						temp1 = roll_no[i];

						roll_no[i] = roll_no[j];

						roll_no[j] = temp1;

						temp2 = mid[i];

						mid[i] = mid[j];

						mid[j] = temp2;

						temp3 = final[i];

						final[i] = final[j];

						final[j] = temp3;

						temp4 = grade[i];

						grade[i] = grade[j];

						grade[j] = temp4;

						temp5 = clas[i];

						clas[i] = clas[j];

						clas[j] = temp5;

						// swap(roll_no[i], roll_no[j]);

						// swap(mid[i], mid[j]);

						// swap(final[i], final[j]);

						// swap(grade[i], grade[j]);

						// swap(clas[i], clas[j]);

					}

				}

				cout << "   " << roll_no[i] << " \t\t " << final[i] << " \t\t " << mid[i] << " \t   " << clas[i] << "\t    " << grade[i] << endl;

			}Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 5)

		{

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				for (int j = i + 1; j < size; j++)

				{

					if (final[i] > final[j])

					{

						temp1 = roll_no[i];

						roll_no[i] = roll_no[j];

						roll_no[j] = temp1;

						temp2 = mid[i];

						mid[i] = mid[j];

						mid[j] = temp2;

						temp3 = final[i];

						final[i] = final[j];

						final[j] = temp3;

						temp4 = grade[i];

						grade[i] = grade[j];

						grade[j] = temp4;

						temp5 = clas[i];

						clas[i] = clas[j];

						clas[j] = temp5;

						// swap(roll_no[i], roll_no[j]);

						// swap(mid[i], mid[j]);

						// swap(final[i], final[j]);

						// swap(grade[i], grade[j]);

						// swap(clas[i], clas[j]);

					}

				}

				cout << "   " << roll_no[i] << " \t\t " << final[i] << " \t\t " << mid[i] << " \t   " << clas[i] << "\t    " << grade[i] << endl;

			}Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 6)

		{

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				for (int j = i + 1; j < size; j++)

				{

					if (final[i] < final[j])

					{

						temp1 = roll_no[i];

						roll_no[i] = roll_no[j];

						roll_no[j] = temp1;

						temp2 = mid[i];

						mid[i] = mid[j];

						mid[j] = temp2;

						temp3 = final[i];

						final[i] = final[j];

						final[j] = temp3;

						temp4 = grade[i];

						grade[i] = grade[j];

						grade[j] = temp4;

						temp5 = clas[i];

						clas[i] = clas[j];

						clas[j] = temp5;

						// swap(roll_no[i], roll_no[j]);

						// swap(mid[i], mid[j]);

						// swap(final[i], final[j]);

						// swap(grade[i], grade[j]);

						// swap(clas[i], clas[j]);

					}

				}

				cout << "   " << roll_no[i] << " \t\t " << final[i] << " \t\t " << mid[i] << " \t   " << clas[i] << "\t    " << grade[i] << endl;

			}Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 7)

		{

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 1; i <= 5; i++)

			{

				if (i == 1)

					key = 'A';

				else if (i == 2)

					key = 'B';

				else if (i == 3)

					key = 'C';

				else if (i == 4)

					key = 'D';

				else

					key = 'F';

				for (int j = 0; j < size; j++)

				{

					if (key == grade[j])

					{

						cout << "   " << roll_no[j] << " \t\t " << final[j] << " \t\t " << mid[j] << " \t   " << clas[j] << "\t    " << grade[j] << endl;

					}

				}

			}Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 8)

		{

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 5; i >= 1; i--)

			{

				if (i == 1)

					key = 'A';

				else if (i == 2)

					key = 'B';

				else if (i == 3)

					key = 'C';

				else if (i == 4)

					key = 'D';

				else

					key = 'F';

				for (int j = 0; j < size; j++)

				{

					if (key == grade[j])

					{

						cout << "   " << roll_no[j] << " \t\t " << final[j] << " \t\t " << mid[j] << " \t   " << clas[j] << "\t    " << grade[j] << endl;

					}

				}

			}Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 9)

		{

			cout << "\nInput roll number \"Roll number must be unique\" :";

			cin >> roll;

			for (int i = 0; i < size && flag == 1; i++)

			if (roll == roll_no[i])

				flag = 0;

			while (flag != 1)

			{

				flag = 1;

				cout << "\nInvalid roll number";

				cout << "\nInput roll number again \"Roll number must be unique\"";

				cin >> roll;

				for (int i = 0; i < size && flag == 1; i++)

				if (roll == roll_no[i])

					flag = 0;

			}



			roll_no[size] = roll;

			cout << "\nInput Mids Marks  :  ";

			cin >> mid[size];

			while (mid[size] < 0 || mid[size]>100)

			{

				cout << "\nInvalid input";

				if (mid[size] < 0)

					cout << "\nMarks must not be negative";

				else if (mid[size] > 100)

					cout << "\nMarks must be less than 101";

				cout << "\nInput Mids Marks again  :  ";

				cin >> mid[size];

			}

			cout << "\nInput Final Marks   :  ";

			cin >> final[size];

			while (final[size] < 0 || final[size]>100)

			{

				cout << "\nInvalid input";

				if (final[size] < 0)

					cout << "\nMarks must not be negative";

				else if (final[size] > 50)

					cout << "\nMarks must be less than 51";

				cout << "\nInput Final Marks again  :  ";

				cin >> final[size];

			}

			cout << "\nInput class  :  ";

			cin >> clas[size];

			while (clas[size] < 0 || clas[size]>10)

			{

				cout << "\nInvalid input";

				if (clas[size] < 0)

					cout << "\nClass can not be negative";

				else if (clas[size] > 10)

					cout << "\nClass can not be greater than 10";

				cout << "\nInput class again  :  ";

				cin >> clas[size];

			}

			gr = final[size] * 100 / 100;

			if (gr >= 86)

				grade[size] = 'A';

			else if (gr >= 73 && gr <= 85)

				grade[size] = 'B';

			else if (gr >= 60 && gr <= 72)

				grade[size] = 'C';

			else if (gr >= 50 && gr <= 59)

				grade[size] = 'D';

			else if (gr < 50)

				grade[size] = 'F';

			//    cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			// for (int i = 0; i < size+1; i++)

			// {

			//                cout << "   " << roll_no[i] << " \t\t " << final[i] << " \t\t " << mid[i] << " \t   " << clas[i] << "\t    " << grade[i] << endl;

			// }

			cout << endl;

			cout << "Record Successfully added" << endl;

			size++;

			Sleep(3000);

			system("CLS");

		}

		else if (choice2 == 10)

		{

			flag = 0;

			cout << "\nInput roll number ";

			cin >> roll;

			while ((flag != 1))

			{

				for (int i = 0; i < size && flag == 0; i++)

				if (roll == roll_no[i])

				{

					flag = 1;

					index = i;

				}

				if (flag == 0)

				{

					cout << "\nInvalid input";

					cout << "\nRoll number does not exist";

					cout << "\nInput roll number again";

					cin >> roll;

				}

			}

			for (int i = index; i < size; i++)

			{

				roll_no[i] = roll_no[i + 1];

				mid[i] = mid[i + 1];

				final[i] = final[i + 1];

				clas[i] = clas[i + 1];

				grade[i] = grade[i + 1];

			}

			// cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			// for (int i = 0; i < size-1; i++)

			// {

			//                cout << "   " << roll_no[i] << " \t\t " << final[i] << " \t\t " << mid[i] << " \t   " << clas[i] << "\t    " << grade[i] << endl;

			// }

			cout << endl;

			cout << "Record Successfully deleted" << endl;

			size--;

			Sleep(3000);

			system("CLS");

		}

		else if (choice2 == 11)

		{

			cout << "\nInput the number";

			cin >> roll;

			while (roll < 0 || roll>100)

			{

				cout << "\nInvalid input";

				if (roll < 0)

					cout << "\nMarks must not be negative";

				else if (roll > 100)

					cout << "\nMarks must be less than 101";

				cout << "\nInput Final Marks again  :  ";

				cin >> roll;

			}

			n = 0;

			for (int i = 0; i < size; i++)

			{

				if (final[i] > roll)

				{

					roll_no2[n] = roll_no[i];

					final2[n] = final[i];

					mid2[n] = mid[i];

					clas2[n] = clas[i];

					grade2[n] = grade[i];

					n++;

				}

			}

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < n; i++)

			{

				for (int j = i + 1; j < n; j++)

				{

					if (final2[i] < final2[j])

					{

						temp1 = roll_no[i];

						roll_no2[i] = roll_no2[j];

						roll_no2[j] = temp1;

						temp2 = mid2[i];

						mid2[i] = mid2[j];

						mid2[j] = temp2;

						temp3 = final2[i];

						final2[i] = final2[j];

						final2[j] = temp3;

						temp4 = grade2[i];

						grade2[i] = grade2[j];

						grade2[j] = temp4;

						temp5 = clas[i];

						clas2[i] = clas2[j];

						clas2[j] = temp5;

						// swap(roll_no2[i], roll_no2[j]);

						// swap(mid2[i], mid2[j]);

						// swap(final2[i], final2[j]);

						// swap(grade2[i], grade2[j]);

						// swap(clas2[i], clas2[j]);

					}

				}

				cout << "   " << roll_no2[i] << " \t\t " << final2[i] << " \t\t " << mid2[i] << " \t   " << clas2[i] << "\t    " << grade2[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 12)

		{

			cout << "\nInput the number";

			cin >> roll;

			while (roll < 0 || roll>100)

			{

				cout << "\nInvalid input";

				if (roll < 0)

					cout << "\nMarks must not be negative";

				else if (roll > 100)

					cout << "\nMarks must be less than 101";

				cout << "\nInput Final Marks again  :  ";

				cin >> roll;

			}

			n = 0;

			for (int i = 0; i < size; i++)

			{

				if (final[i] > roll)

				{

					roll_no2[n] = roll_no[i];

					final2[n] = final[i];

					mid2[n] = mid[i];

					clas2[n] = clas[i];

					grade2[n] = grade[i];

					n++;

				}

			}

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < n; i++)

			{

				for (int j = i + 1; j < n; j++)

				{

					if (final2[i] > final2[j])

					{

						temp1 = roll_no[i];

						roll_no2[i] = roll_no2[j];

						roll_no2[j] = temp1;

						temp2 = mid2[i];

						mid2[i] = mid2[j];

						mid2[j] = temp2;

						temp3 = final2[i];

						final2[i] = final2[j];

						final2[j] = temp3;

						temp4 = grade2[i];

						grade2[i] = grade2[j];

						grade2[j] = temp4;

						temp5 = clas[i];

						clas2[i] = clas2[j];

						clas2[j] = temp5;

						// swap(roll_no2[i], roll_no2[j]);

						// swap(mid2[i], mid2[j]);

						// swap(final2[i], final2[j]);

						// swap(grade2[i], grade2[j]);

						// swap(clas2[i], clas2[j]);

					}

				}

				cout << "   " << roll_no2[i] << " \t\t " << final2[i] << " \t\t " << mid2[i] << " \t   " << clas2[i] << "\t    " << grade2[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 13)

		{

			cout << "\nInput the number";

			cin >> roll;

			while (roll < 0 || roll>100)

			{

				cout << "\nInvalid input";

				if (roll < 0)

					cout << "\nMarks must not be negative";

				else if (roll > 100)

					cout << "\nMarks must be less than 101";

				cout << "\nInput Final Marks again  :  ";

				cin >> roll;

			}

			n = 0;

			for (int i = 0; i < size; i++)

			{

				if (final[i] <= roll)

				{

					roll_no2[n] = roll_no[i];

					final2[n] = final[i];

					mid2[n] = mid[i];

					clas2[n] = clas[i];

					grade2[n] = grade[i];

					n++;

				}

			}

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < n; i++)

			{

				for (int j = i + 1; j < n; j++)

				{

					if (final2[i] < final2[j])

					{

						temp1 = roll_no[i];

						roll_no2[i] = roll_no2[j];

						roll_no2[j] = temp1;

						temp2 = mid2[i];

						mid2[i] = mid2[j];

						mid2[j] = temp2;

						temp3 = final2[i];

						final2[i] = final2[j];

						final2[j] = temp3;

						temp4 = grade2[i];

						grade2[i] = grade2[j];

						grade2[j] = temp4;

						temp5 = clas[i];

						clas2[i] = clas2[j];

						clas2[j] = temp5;

						// swap(roll_no2[i], roll_no2[j]);

						// swap(mid2[i], mid2[j]);

						// swap(final2[i], final2[j]);

						// swap(grade2[i], grade2[j]);

						// swap(clas2[i], clas2[j]);

					}

				}

				cout << "   " << roll_no2[i] << " \t\t " << final2[i] << " \t\t " << mid2[i] << " \t   " << clas2[i] << "\t    " << grade2[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 14)

		{

			cout << "\nInput the number";

			cin >> roll;

			while (roll < 0 || roll>100)

			{

				cout << "\nInvalid input";

				if (roll < 0)

					cout << "\nMarks must not be negative";

				else if (roll > 100)

					cout << "\nMarks must be less than 101";

				cout << "\nInput Final Marks again  :  ";

				cin >> roll;

			}

			n = 0;

			for (int i = 0; i < size; i++)

			{

				if (final[i] <= roll)

				{

					roll_no2[n] = roll_no[i];

					final2[n] = final[i];

					mid2[n] = mid[i];

					clas2[n] = clas[i];

					grade2[n] = grade[i];

					n++;

				}

			}

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < n; i++)

			{

				for (int j = i + 1; j < n; j++)

				{

					if (final2[i] > final2[j])

					{

						temp1 = roll_no[i];

						roll_no2[i] = roll_no2[j];

						roll_no2[j] = temp1;

						temp2 = mid2[i];

						mid2[i] = mid2[j];

						mid2[j] = temp2;

						temp3 = final2[i];

						final2[i] = final2[j];

						final2[j] = temp3;

						temp4 = grade2[i];

						grade2[i] = grade2[j];

						grade2[j] = temp4;

						temp5 = clas[i];

						clas2[i] = clas2[j];

						clas2[j] = temp5;

						// swap(roll_no2[i], roll_no2[j]);

						// swap(mid2[i], mid2[j]);

						// swap(final2[i], final2[j]);

						// swap(grade2[i], grade2[j]);

						// swap(clas2[i], clas2[j]);

					}

				}

				cout << "   " << roll_no2[i] << " \t\t " << final2[i] << " \t\t " << mid2[i] << " \t   " << clas2[i] << "\t    " << grade2[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 15)

		{

			cout << "\nInput the grade" << endl;

			cin >> key;

			flag = 0;

			if (key == 'a' || key == 'A' || key == 'b' || key == 'B' || key == 'C' || key == 'c' || key == 'D' || key == 'd' || key == 'f' || key == 'F')

				flag = 1;

			while (flag != 1)

			{

				cout << "\nInvalid input";

				cout << "\nInput the grade again" << endl;

				cin >> key;

				if (key == 'a' || key == 'A' || key == 'b' || key == 'B' || key == 'C' || key == 'c' || key == 'D' || key == 'd' || key == 'f' || key == 'F')

					flag = 1;

			}

			n = 0;

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				if (key > grade[i])

				{

					roll_no2[n] = roll_no[i];

					final2[n] = final[i];

					mid2[n] = mid[i];

					clas2[n] = clas[i];

					grade2[n] = grade[i];

					n++;

				}

			}

			for (int i = 0; i < n; i++)

			{

				for (int j = i + 1; j < n; j++)

				{

					if (grade2[i] > grade2[j])

					{

						temp1 = roll_no[i];

						roll_no2[i] = roll_no2[j];

						roll_no2[j] = temp1;

						temp2 = mid2[i];

						mid2[i] = mid2[j];

						mid2[j] = temp2;

						temp3 = final2[i];

						final2[i] = final2[j];

						final2[j] = temp3;

						temp4 = grade2[i];

						grade2[i] = grade2[j];

						grade2[j] = temp4;

						temp5 = clas[i];

						clas2[i] = clas2[j];

						clas2[j] = temp5;

						// swap(roll_no2[i], roll_no2[j]);

						// swap(mid2[i], mid2[j]);

						// swap(final2[i], final2[j]);

						// swap(grade2[i], grade2[j]);

						// swap(clas2[i], clas2[j]);

					}

				}

				cout << "   " << roll_no2[i] << " \t\t " << final2[i] << " \t\t " << mid2[i] << " \t   " << clas2[i] << "\t    " << grade2[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 16)

		{

			cout << "\nInput the grade" << endl;

			cin >> key;

			flag = 0;

			if (key == 'a' || key == 'A' || key == 'b' || key == 'B' || key == 'C' || key == 'c' || key == 'D' || key == 'd' || key == 'f' || key == 'F')

				flag = 1;

			while (flag != 1)

			{

				cout << "\nInvalid input";

				cout << "\nInput the grade again" << endl;

				cin >> key;

				if (key == 'a' || key == 'A' || key == 'b' || key == 'B' || key == 'C' || key == 'c' || key == 'D' || key == 'd' || key == 'f' || key == 'F')

					flag = 1;

			}

			n = 0;

			for (int i = 0; i < size; i++)

			{

				if (key > grade[i])

				{

					roll_no2[n] = roll_no[i];

					final2[n] = final[i];

					mid2[n] = mid[i];

					clas2[n] = clas[i];

					grade2[n] = grade[i];

					n++;

				}

			}

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < n; i++)

			{

				for (int j = i + 1; j < n; j++)

				{

					if (grade2[i] < grade2[j])

					{

						temp1 = roll_no[i];

						roll_no2[i] = roll_no2[j];

						roll_no2[j] = temp1;

						temp2 = mid2[i];

						mid2[i] = mid2[j];

						mid2[j] = temp2;

						temp3 = final2[i];

						final2[i] = final2[j];

						final2[j] = temp3;

						temp4 = grade2[i];

						grade2[i] = grade2[j];

						grade2[j] = temp4;

						temp5 = clas[i];

						clas2[i] = clas2[j];

						clas2[j] = temp5;

						// swap(roll_no2[i], roll_no2[j]);

						// swap(mid2[i], mid2[j]);

						// swap(final2[i], final2[j]);

						// swap(grade2[i], grade2[j]);

						// swap(clas2[i], clas2[j]);

					}

				}

				cout << "   " << roll_no2[i] << " \t\t " << final2[i] << " \t\t " << mid2[i] << " \t   " << clas2[i] << "\t    " << grade2[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 17)

		{

			cout << "\nInput the grade" << endl;

			cin >> key;

			flag = 0;

			if (key == 'a' || key == 'A' || key == 'b' || key == 'B' || key == 'C' || key == 'c' || key == 'D' || key == 'd' || key == 'f' || key == 'F')

				flag = 1;

			while (flag != 1)

			{

				cout << "\nInvalid input";

				cout << "\nInput the grade again" << endl;

				cin >> key;

				if (key == 'a' || key == 'A' || key == 'b' || key == 'B' || key == 'C' || key == 'c' || key == 'D' || key == 'd' || key == 'f' || key == 'F')

					flag = 1;

			}

			n = 0;

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				if (key <= grade[i])

				{

					roll_no2[n] = roll_no[i];

					final2[n] = final[i];

					mid2[n] = mid[i];

					clas2[n] = clas[i];

					grade2[n] = grade[i];

					n++;

				}

			}

			for (int i = 0; i < n; i++)

			{

				for (int j = i + 1; j < n; j++)

				{

					if (grade2[i] > grade2[j])

					{

						temp1 = roll_no[i];

						roll_no2[i] = roll_no2[j];

						roll_no2[j] = temp1;

						temp2 = mid2[i];

						mid2[i] = mid2[j];

						mid2[j] = temp2;

						temp3 = final2[i];

						final2[i] = final2[j];

						final2[j] = temp3;

						temp4 = grade2[i];

						grade2[i] = grade2[j];

						grade2[j] = temp4;

						temp5 = clas[i];

						clas2[i] = clas2[j];

						clas2[j] = temp5;

						// swap(roll_no2[i], roll_no2[j]);

						// swap(mid2[i], mid2[j]);

						// swap(final2[i], final2[j]);

						// swap(grade2[i], grade2[j]);

						// swap(clas2[i], clas2[j]);

					}

				}

				cout << "   " << roll_no2[i] << " \t\t " << final2[i] << " \t\t " << mid2[i] << " \t   " << clas2[i] << "\t    " << grade2[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 18)

		{

			cout << "\nInput the grade" << endl;

			cin >> key;

			flag = 0;

			if (key == 'a' || key == 'A' || key == 'b' || key == 'B' || key == 'C' || key == 'c' || key == 'D' || key == 'd' || key == 'f' || key == 'F')

				flag = 1;

			while (flag != 1)

			{

				cout << "\nInvalid input";

				cout << "\nInput the grade again" << endl;

				cin >> key;

				if (key == 'a' || key == 'A' || key == 'b' || key == 'B' || key == 'C' || key == 'c' || key == 'D' || key == 'd' || key == 'f' || key == 'F')

					flag = 1;

			}

			n = 0;

			cout << "Roll # \t Final Marks \t Mids Marks \t Class    Grade" << endl;

			for (int i = 0; i < size; i++)

			{

				if (key <= grade[i])

				{

					roll_no2[n] = roll_no[i];

					final2[n] = final[i];

					mid2[n] = mid[i];

					clas2[n] = clas[i];

					grade2[n] = grade[i];

					n++;

				}

			}

			for (int i = 0; i < n; i++)

			{

				for (int j = i + 1; j < n; j++)

				{

					if (grade2[i] < grade2[j])

					{

						temp1 = roll_no[i];

						roll_no2[i] = roll_no2[j];

						roll_no2[j] = temp1;

						temp2 = mid2[i];

						mid2[i] = mid2[j];

						mid2[j] = temp2;

						temp3 = final2[i];

						final2[i] = final2[j];

						final2[j] = temp3;

						temp4 = grade2[i];

						grade2[i] = grade2[j];

						grade2[j] = temp4;

						temp5 = clas[i];

						clas2[i] = clas2[j];

						clas2[j] = temp5;

						// swap(roll_no2[i], roll_no2[j]);

						// swap(mid2[i], mid2[j]);

						// swap(final2[i], final2[j]);

						// swap(grade2[i], grade2[j]);

						// swap(clas2[i], clas2[j]);

					}

				}

				cout << "   " << roll_no2[i] << " \t\t " << final2[i] << " \t\t " << mid2[i] << " \t   " << clas2[i] << "\t    " << grade2[i] << endl;

			}

			Sleep(10000);

			system("CLS");

		}

		else if (choice2 == 19)

			break;

		else

			cout << "\nInvalid  input" << endl;





	}

	cout << endl;

	getchar();

	return 0;

}
