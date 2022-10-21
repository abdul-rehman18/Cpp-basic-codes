
#include<iostream>
#include<fstream>
#include<Windows.h>

using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

/* Reading Matrxi Data From file */
int** readFromFile(int** matrix, int& row, int& col)
{
FILE:
    string fileName;
    cout << "Enter the name of file with extension : (.txt) ";
    cin >> fileName;
    fstream file;
    file.open(fileName);
    if (!file.is_open())
    {
        cout << "Error" << endl;
        goto FILE;
    }
    else
    {
        file >> row >> col;
        matrix = new int* [row];
        for (int n = 0; n < row; n++)
        {
            matrix[n] = new int[col];
        }

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                file >> matrix[i][j];
            }
        }
    }
    return matrix;
}


/* Column Wise Sorting of martix */
void columnSorting(int** arr, int row, int col)
{
    for (int x = 0; x < row; x++)
    {
        for (int i = 0; i < col; i++)
        {
            for (int j = i; j < col; j++)
            {
                if (arr[i][x] > arr[j][x])
                {
                    swap(arr[i][x], arr[j][x]);
                }
            }
        }
    }
}

/*Row Wise Sorting of martix */
void rowSorting(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < col - j - 1; k++)
            {
                if (arr[i][k] > arr[i][k + 1])
                {
                    swap(arr[i][k], arr[i][k + 1]);

                }
            }
        }
    }
}



/* Function to calculate the row-wise average of matrix */
void rowAvg(int** arr, int row, int col)
{
    float average;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        average = (float)sum / col;
        cout << "The average of row " << i + 1 << " is " << average << " " << endl;
    }
}

/* Function to calculate the column-wise average of matrix */
void colAvg(int** arr, int row, int col)
{
    float average;
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[j][i];
        }
        average = (float)sum / col;
        cout << "The average of column " << i + 1 << " is " << average << endl;
    }
}


/* function to perform addition on two matrices */
void additionOfTwoMatrice(int** arr, int** arr2, int row, int col, int** addMatrix)
{
    /* Iniliaze the values of addMatrix to zero */
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            addMatrix[i][j] = 0;
        }
    }

    /* Performing addition on matrices */

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            addMatrix[i][j] = arr[i][j] + arr2[i][j];
        }
    }
}


/* function to perform subtarction on two matrices */
void subtractionOfTwoMatrice(int** arr, int** arr2, int row, int col, int** subMatrix)
{
    /* Iniliaze the values of subMatrix to zero */
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            subMatrix[i][j] = 0;
        }
    }

    /* Performing subtraction on matrices */

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            subMatrix[i][j] = arr[i][j] - arr2[i][j];
        }
    }
}

/* function to calculate the average of whole matrix */
float avgOfWholeMatrix(int** arr, int row, int col)
{
    int sum = 0;
    float average;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
    }
    average = (float)sum / (row * col);
    return average;
}


/* function to find the transpose of the maytrix */
void tranposeOfMatrix(int** arr, int row, int col, int** arr2)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr2[j][i] = arr[i][j];
        }
    }
}

/* function to find the sum of all the values */
int sumOfAllValues(int** arr, int row, int col)
{
    int sum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    return sum;
}
/* function to find the product of all the values of a matrix */
int productOfAllValues(int** arr, int row, int col)
{
    int product = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            product *= arr[i][j];
        }
    }

    return product;
}


/* function to take the values of the matrix */
void matrixValue(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter the value of row " << i + 1 << " and column " << j + 1 << " : ";
            cin >> arr[i][j];
        }
    }
}


/* function to print the matrix on the console */
void printMatrixValues(int** arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int rowOfMatrixOne=0, colOfMatrixOne=0, rowOfMatrixTwo=0, colOfMatrixTwo=0;
    int option = -1, choice = 0;

    /* Matrxi declararion */
    int** matrixOne=nullptr, ** matrixTwo=nullptr, ** transposeOfMatrixOne=nullptr, ** transposeOfMatrixTwo=nullptr;
    int** addMatrix=nullptr, ** subMatrix=nullptr;


    do
    {
    START:
        cout << "Press 0 to exit" << endl;
        cout << "Press 1 to enter data" << endl;
        cout << "Press 2 to enter data from file" << endl;

        cin >> option;

        if (option == 0)
        {
            // Terminate the program
            exit(0);
        }
        else if (option == 1)
        {
            /* Taking the rows and colums of matrices */
        STARTTWO:
            cout << "Enter the number of row of matrix one : ";
            cin >> rowOfMatrixOne;
            cout << "Enter the number of column of matrix one : ";
            cin >> colOfMatrixOne;

            cout << "Enter the number of row of matrix two : ";
            cin >> rowOfMatrixTwo;
            cout << "Enter the number of column of matrix two : ";
            cin >> colOfMatrixTwo;
            if (rowOfMatrixOne > 0 && colOfMatrixOne > 0 && rowOfMatrixTwo > 0 && colOfMatrixTwo
    > 0)
            {
                // Declaring matrixes dynamically
                // matrix One
                matrixOne = new int* [rowOfMatrixOne];
                for (int i = 0; i < rowOfMatrixOne; i++)
                {
                    matrixOne[i] = new int[colOfMatrixOne];
                }
                // Taking values of matrix One
                cout << endl;
                cout << "Enter the values of Matrix One : " << endl;
                cout << endl;
                matrixValue(matrixOne, rowOfMatrixOne, colOfMatrixOne);

                // Matrix Two

                matrixTwo = new int* [rowOfMatrixTwo];
                for (int j = 0; j < rowOfMatrixTwo; j++)
                {
                    matrixTwo[j] = new int[colOfMatrixTwo];
                }

                //  Taking values of matrix Two
                cout << endl;
                cout << "Enter the values of Matrxi Two : " << endl << endl;
                matrixValue(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);


             

                Sleep(300);
                system("cls");










            }
            else
            {
                cout << "Number of row or column can not be negative" << endl;
                Sleep(400); // hold the command prompt for 400 miliseconds
                system("cls");
                goto STARTTWO;
            }
        }
        else if (option == 2)
        {
            cout << "Reading first matrix data from the file" << endl;
            matrixOne = readFromFile(matrixOne, rowOfMatrixOne, colOfMatrixOne);
            //cout<<"Row : "<<rowOfMatrixOne<<" Col: "<<colOfMatrixOne<<endl;
            cout << "Reading second matrix data from the file" << endl;
            matrixTwo = readFromFile(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
            //cout<<"Row : "<<rowOfMatrixTwo<<" Col: "<<colOfMatrixTwo<<endl;
        }
        else {
            cout << "Invalid Input" << endl;
            Sleep(500);
            system("cls");
            goto START;
        }
        //Matricex for storing the transpose of matrices

        transposeOfMatrixOne = new int* [colOfMatrixOne];
        for (int m = 0; m < colOfMatrixOne; m++)
        {
            transposeOfMatrixOne[m] = new int[rowOfMatrixOne];
        }

        transposeOfMatrixTwo = new int* [colOfMatrixTwo];
        for (int n = 0; n < colOfMatrixTwo; n++)
        {
            transposeOfMatrixTwo[n] = new int[rowOfMatrixTwo];
        }

        /* Creating the add matrix to hold the resultant of two matrices */

        addMatrix = new int* [rowOfMatrixOne];
        for (int n = 0; n < rowOfMatrixOne; n++)
        {
            addMatrix[n] = new int[rowOfMatrixOne];
        }

        /* Creating the sub matrix to hold the resultant of two matrices */

        subMatrix = new int* [rowOfMatrixOne];
        for (int n = 0; n < rowOfMatrixOne; n++)
        {
            subMatrix[n] = new int[rowOfMatrixOne];
        }

        cout << "Press the number against the operation to perform taht operation on matrix" << endl;
        do {
            cout << "0. Exit" << endl;
            cout << "1. Sum of all values of matrix" << endl;
            cout << "2. Product of all values of matrix" << endl;
            cout << "3. Row wise average of matrix" << endl;
            cout << "4. Column wise average of matrix" << endl;
            cout << "5. Average of Whole matrix" << endl;
            cout << "6. Row wise sorting of matrix" << endl;
            cout << "7. Column wise sorting of matrix" << endl;
            cout << "8. Additin of two matrices" << endl;
            cout << "9. Subtraction of two matrices" << endl;
            cout << "10. Transpose of matrix" << endl;
            cout << "11. Print the values of matrices" << endl;
            cout << "12. Clear screen" << endl;
            cin >> choice;
            switch (choice)
            {
            case 0:
                system("cls");
                break;
            case 1:
                /* Calculating the sum of all the values */
                cout << endl;
                cout << "The sum of all values of matrix one " << sumOfAllValues(matrixOne, rowOfMatrixOne, colOfMatrixOne) << endl;
                cout << "The sum of all values of matrix two " << sumOfAllValues(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo) << endl;
                cout << endl;
                break;
            case 2:
                /* Calculating the product of all values of matrices */
                cout << endl;
                cout << "The product of all values of matrix one " << productOfAllValues(matrixOne, rowOfMatrixOne, colOfMatrixOne) << endl;
                cout << "The product of all values of matrix two " << productOfAllValues(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo) << endl;
                cout << endl;
                break;
            case 3:
                cout << endl;
                cout << "The row wise average of matrix one : " << endl;
                rowAvg(matrixOne, rowOfMatrixOne, colOfMatrixOne);

                cout << "The row wise average of matrix two : " << endl;
                rowAvg(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
                cout << endl;
                break;
            case 4:
                cout << endl;
                cout << "The column wise average of matrix one : " << endl;
                colAvg(matrixOne, colOfMatrixOne, rowOfMatrixOne);
                cout << endl;

                cout << "The column wise average of matrix two : " << endl;
                colAvg(matrixTwo, colOfMatrixTwo, rowOfMatrixTwo);
                cout << endl;
                break;
            case 5:
                /*  Calculating the Average of matrices*/
                cout << endl;
                cout << "The Average of matrix One : ";
                cout << avgOfWholeMatrix(matrixOne, rowOfMatrixOne, colOfMatrixOne) << endl;

                cout << endl;
                cout << "The Average of matrix Two : ";
                cout << avgOfWholeMatrix(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo) << endl;
                cout << endl;
                break;
            case 6:
                cout << endl;
                cout << "Before Row Wise Sorting" << endl;
                cout << "Matrix One" << endl;
                printMatrixValues(matrixOne, rowOfMatrixOne, colOfMatrixOne);
                cout << endl;
                cout << "Matrix Two " << endl;
                printMatrixValues(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
                cout << endl;
                cout << "After Sorting row wise " << endl;
                cout << "Matrix one" << endl;
                rowSorting(matrixOne, rowOfMatrixOne, colOfMatrixOne);
                rowSorting(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
                printMatrixValues(matrixOne, rowOfMatrixOne, colOfMatrixOne);
                cout << endl;
                cout << "Matrix Two" << endl;
                printMatrixValues(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
                break;
            case 7:
                cout << endl;
                cout << "Before Column Wise Sorting Matrix One" << endl;
                printMatrixValues(matrixOne, rowOfMatrixOne, colOfMatrixOne);
                cout << endl;
                cout << "Matrix Two " << endl;
                printMatrixValues(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
                cout << endl;
                cout << "After Sorting column wise Matrix one" << endl;
                columnSorting(matrixOne, rowOfMatrixOne, colOfMatrixOne);
                columnSorting(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
                printMatrixValues(matrixOne, rowOfMatrixOne, colOfMatrixOne);
                cout << endl;
                cout << "Matrix Two" << endl;
                printMatrixValues(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
                break;
            case 8:
                cout << endl;
                if ((rowOfMatrixOne != rowOfMatrixTwo) || (colOfMatrixOne != colOfMatrixTwo))
                {
                    cout << "The number of row and column of two matrices are not equal";
                    cout << " Addition cannot be performed on them" << endl;
                }
                else
                {
                    additionOfTwoMatrice(matrixOne, matrixTwo, rowOfMatrixOne, colOfMatrixOne, addMatrix);
                    printMatrixValues(addMatrix, rowOfMatrixOne, colOfMatrixOne);
                }
                cout << endl;

                break;
            case 9:
                cout << endl;
                if ((rowOfMatrixOne != rowOfMatrixTwo) || (colOfMatrixOne != colOfMatrixTwo))
                {
                    cout << "The number of row and column of two matrices are not equal";
                    cout << " Subtraction cannot be performed on them" << endl;
                }
                else
                {
                    subtractionOfTwoMatrice(matrixOne, matrixTwo, rowOfMatrixOne, colOfMatrixOne, subMatrix);
                    printMatrixValues(subMatrix, rowOfMatrixOne, colOfMatrixOne);
                }
                cout << endl;
                break;
            case 10:
                /* Calculating the transpose of matrices*/
                cout << endl;
                cout << "Matrix One " << endl;
                printMatrixValues(matrixOne, rowOfMatrixOne, colOfMatrixOne);
                cout << "Matrix one transpose is : " << endl;
                tranposeOfMatrix(matrixOne, rowOfMatrixOne, colOfMatrixOne, transposeOfMatrixOne);
                printMatrixValues(transposeOfMatrixOne, colOfMatrixOne, rowOfMatrixOne);
                cout << "Matrix Two " << endl;
                printMatrixValues(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
                cout << "Matric two transpose is : " << endl;
                tranposeOfMatrix(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo, transposeOfMatrixTwo);
                printMatrixValues(transposeOfMatrixTwo, colOfMatrixTwo, rowOfMatrixTwo);
                cout << endl;
                break;

            case 11:
                /* Printing the values of matrices */
                cout << "The values of matrix one is " << endl;
                printMatrixValues(matrixOne, rowOfMatrixOne, colOfMatrixOne);
                cout << "The values of matrix two is " << endl;
                printMatrixValues(matrixTwo, rowOfMatrixTwo, colOfMatrixTwo);
                break;

            case 12:
                /* Clear the screen */
                system("cls");
                break;
            default:
                cout << "Invalid input" << endl;
            }
        } while (choice != 0);  // for inner while condition

    } while (option != 0); // for outer while condition


    return 0;
}
