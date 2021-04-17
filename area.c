#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#include "cvect.h"

void area_tester(int a[], int b[], int c[], int d[])
{
    printf("Area of a triangle_adj : %f\n",triangle_adj(a,c));
}

int main()
{
    int a[] = {1,2,3};
    int b[] = {4,5,2};
    int c[] = {-7,-8,-9};
    int d[] = {0,0,0};

    area_tester(a,b,c,d);
    return 0;
}