#pragma once
#include <assert.h>
#include <iostream>
#include <string.h>
#include "tableaux.h"
using namespace std;
namespace inter
{
    class TableauBorne : public tableau
    {
    private:
        double min;
        double max;
    public:
        TableauBorne(int a, double b, double c);
        double& operator[]( int d);
    };
}
