#pragma once
#include <assert.h>
#include <iostream>
#include <string.h>
using namespace std;
namespace inter
{
	class tableau
	{
	protected:
		double* T;
		int n;
	public:
		tableau(int a);
		tableau(const tableau& M);
		tableau& operator=(const tableau& M);
	    double& operator[](int d);
		void print() const;
		~tableau();


	};
};
