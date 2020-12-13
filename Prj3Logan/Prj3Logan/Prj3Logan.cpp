// Prj3Logan.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Code: Logan Jones
// Date:  December 13, 2020
//nMatrixOperations

#include "pch.h"
#include "matrixOperation.h"

int main() // main function
{
	matrixOperation m1, m2, m3; // generates 3 matricies
	exception e; 

	cout << "Please enter values for Matrix 1\n";
	cin >> m1;

	cout << "\n Please enter values for Matrix 2\n";
	cin >> m2;

	int ch;
	cout << "\n***** Select one of the options from the Menu as below *****\n";
	cout << "1.Addition of a value to the Matrix\n2.Subtraction of a value from the Matrix\n3.Addition of two matrices\n4.Subtraction of two matrices\n5.Multiplication of two matrices\n";
	cin >> ch;

	switch (ch) // case statement for add/sub/multiply values or matricies
	{
	case 1:
		int a;
		cout << "\nAddition of a value to the Matrix \n";
		cout << "\n Enter value to be added to the matrix: ";
		cin >> a;
		m3 = m1 + a;
		cout << m3 << endl;
		break;

	case 2:
		int b;
		cout << "\nSubtraction of a value from the Matrix \n";
		cout << "\n Enter value to be subtracted from the matrix: ";
		cin >> b;
		m3 = m1 - b;
		cout << m3 << endl;
		break;

	case 3:
		cout << "\nAddition of two matrices\n";

		try {
			if (m1 != m2)
			{
				throw e; // throws the exception set
			}
		}

		catch (const exception &exc)
		{
			cout << "\n Program aborting ...";
			cerr << exc.what();
			return -1;
		}
		m3 = m1 + m2;
		cout << m3 << endl;
		break;

	case 4:
		cout << "\nSubtraction of two matrices\n";

		try {
			if (m1 != m2)
			{
				throw e;
			}
		}

		catch (const exception &exc)
		{
			cout << "\n Program aborting ...";
			cerr << exc.what();
			return -1;
		}
		m3 = m1 - m2;
		cout << m3 << endl;
		break;

	case 5:
		cout << "\nMultiplication of two matrices\n";

		try {
			if (m1 != m2)
			{
				throw e;
			}
		}

		catch (const exception &exc)
		{
			cout << "\n Program aborting ...";
			cerr << exc.what();
			return -1;
		}
		m3 = m1 * m2;
		cout << m3 << endl;
		break;

	default: cout << "Invalid choice\n";
	}
	return 0;
}