#pragma once
#include<iostream>  
#include<stdlib.h>  
#define MAX 10  // sets MAX size of matricieses
using namespace std;

class matrixOperation
{
	int rowno, colno, mat[MAX][MAX], sum;
public:
	matrixOperation();
	friend istream& operator >> (istream& din, matrixOperation& m); // friend lets this function access the private parts of siad class
	friend ostream& operator <<(ostream& dout, matrixOperation& m);
	matrixOperation operator +(int a); // addition
	matrixOperation operator -(int a); // subtraction
	matrixOperation operator +(matrixOperation m2); // overloaded 
	matrixOperation operator -(matrixOperation m2); // overloaded
	matrixOperation operator *(matrixOperation m2); // overloaded
	int operator !=(matrixOperation m2);
};