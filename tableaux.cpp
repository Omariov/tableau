#include <iostream>
#include "tableaux.h"
using namespace std;
using namespace inter;

tableau::tableau(int a)
{
	this->n = a;
	this->T = new double[a];
	for (int i = 0; i < a; i++)
	{
		this->T[i] = 0;
	}
	
}

tableau::tableau(const tableau& M)
{
	this->n = M.n;
	for (int i = 0; i < this->n; i++)
	{
		this->T[i] = M.T[i];
	}
}

tableau& tableau::operator=(const tableau& M)
{
	if (this != &M)
	{
		this->n = M.n;
		for (int i = 0; i < this->n; i++)
		{
			this->T[i] = M.T[i];
		}
	}
	return *(this);
}

 double& tableau::operator[](int d)
{
	try
	{
		if (d<0 && d>this->n) throw "errouuuuuuur";
		return this->T[d];
	}
	catch (string e)
	{
		cout << e;
	}
}

void tableau::print() const
{
	for (int j = 0; j < this->n; j++)
	{
		cout << this->T[j] << "\t";
	}
	cout << endl;
}


tableau::~tableau()
{

	delete[] this->T;
	this->T = NULL;
}

