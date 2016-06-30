#include<stdio.h>

#include "math.h"
extern const double PI;

double my_area(float r)
{
	printf("\nPI=%f\n",PI);
	printf("\nr=%f\n",r);
	printf("\nr*r=%f\n",r*r);
	printf("\nPI*r*r=%f\n",PI*r*r);
        return PI*r*r;
}

