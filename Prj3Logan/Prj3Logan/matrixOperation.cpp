#include "pch.h"
#include "matrixOperation.h"

matrixOperation::matrixOperation() //  sets up matricies
{
	rowno = colno = 0;
	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++)
			mat[i][j] = 0;
}
istream& operator >> (istream& din, matrixOperation& m) // user sets size of matricies
{
	cout << "Enter the size\n";
	din >> m.rowno >> m.colno;
	cout << "Enter the elements\n";
	for (int i = 0; i < m.rowno; i++)
		for (int j = 0; j < m.colno; j++)
			din >> m.mat[i][j];
	return din;
}

ostream& operator <<(ostream& dout, matrixOperation& m) //displays
{
	for (int i = 0; i < m.rowno; i++)
	{
		for (int j = 0; j < m.colno; j++)
		{
			dout << m.mat[i][j] << "\t";
		}
		dout << endl;
	}
	return dout;
}

matrixOperation matrixOperation :: operator +(int a) // add values
{
	matrixOperation m3;
	m3.rowno = m3.colno = rowno;
	for (int i = 0; i < rowno; i++)
		for (int j = 0; j < colno; j++)
			m3.mat[i][j] = mat[i][j] + a;
	return m3;
}

matrixOperation matrixOperation :: operator -(int a) // subract values
{
	matrixOperation m3;
	m3.rowno = m3.colno = rowno;
	for (int i = 0; i < rowno; i++)
		for (int j = 0; j < colno; j++)
			m3.mat[i][j] = mat[i][j] - a;
	return m3;
}

matrixOperation matrixOperation :: operator +(matrixOperation m2) // add m2
{
	matrixOperation m3;
	m3.rowno = m3.colno = rowno;
	for (int i = 0; i < rowno; i++)
		for (int j = 0; j < colno; j++)
			m3.mat[i][j] = mat[i][j] + m2.mat[i][j];
	return m3;
}

matrixOperation matrixOperation :: operator -(matrixOperation m2) // subtract m2
{
	matrixOperation m3;
	m3.rowno = m3.colno = rowno;
	for (int i = 0; i < rowno; i++)
		for (int j = 0; j < colno; j++)
			m3.mat[i][j] = mat[i][j] - m2.mat[i][j];
	return m3;
}

matrixOperation matrixOperation :: operator *(matrixOperation m2) // multiply m2
{
	matrixOperation m3;
	m3.rowno = m3.colno = rowno;
	for (int i = 0; i < rowno; i++)
	{
		for (int j = 0; j < colno; j++)
		{
			m3.mat[i][j] = 0;

			for (int k = 0; k < m2.rowno; k++)
				m3.mat[i][j] += mat[i][k] * m2.mat[k][j];
		}
	}
	return m3;
}

int matrixOperation ::operator !=(matrixOperation m2)
{
	if (rowno != m2.rowno && colno != m2.colno)
		return 1;
	else
		return 0;
}
