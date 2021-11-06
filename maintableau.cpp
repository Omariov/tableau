#include <iostream>
#include "tableaux.h"
#include "TableauBorne.h"
using namespace std;
using namespace inter;

int main()
{
	tableau* A = new tableau(4);
	tableau B(4);
	TableauBorne C(4, 2, 6);
	C.print();
	B.print();
	B[1] = 1;
	B.print();
	(*A)[2] = 1;
	A->print();
	

	//A->operator[](2);
	return 0;
}