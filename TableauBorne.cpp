#include <assert.h>
#include <iostream>
#include <string.h>
#include "TableauBorne.h"

using namespace std;
using namespace inter;

TableauBorne::TableauBorne(int a, double b, double c):tableau(a)
{
	this->min = b;
	this->max = c;
}

double& TableauBorne::operator[](int d)
{
	try
	{
		if (d<0 && d>this->n) throw "errouur";
		return this->T[d];
	}
	catch (string e)
	{
		cout << e;
	}
}

