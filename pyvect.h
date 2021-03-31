/////////////////////////////////////////////////////

// PYVECT-C

// FILE NAME: PYVECT.H

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// MAIN HEADER FILE FOR THE LIBRARY PYVECT

// HEADER FILE DEFINITION
#ifndef PYVECT_H
#define PYVECT_H

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "area.h"

// FUNCTION TO CALCULATE THE DOT PRODUCT
int dot(int *x, int *y)
{
    int dot_product = 0;
    for(int i = 0; i<3; i++)
    {
        dot_product = dot_product + (x[i]*y[i]);
    }
    return dot_product;
}

// FUNCTION TO CALCULATE THE CROSS PRODUCT
int *cross(int *x, int *y)
{
    int *cross_product = {0,0,0};
    cross_product[0] = x[1]*y[2] - x[2]*y[1];
    cross_product[1] = x[2]*x[0] - x[0]*y[2];
    cross_product[2] = x[0]*y[1] - x[1]*y[0];
    return cross_product;
}

// FUNCTION TO CALCULATE THE MODULUS OF A VECTOR
double modVector(int *x)
{
    double mod = sqrt((x[0]^2)+(x[1]^2)+(x[2]^2));
    return mod;
}

// FUNCTION TO FIND ANGLE BETWEEN TWO VECTORS
double angle(int *x,int *y)
{
    double ang = acos((dot(x,y))/(modVector(x)*modVector(y)));
    return ang;
}

// FUNCTION TO FIND THE PROJECTION OF ONE VECTOR OVER ANOTHER
double projection(int *x, int *y)
{
    double mod = modVector(y);
    double proj = dot(x,y)/mod;
    return proj;
}

// FUNCTION TO FIND IF TWO VECTORS ARE PREPENDICULAR
bool isPerpendicular(int *x, int *y)
{
    if (dot(x,y) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// FUNCTION TO FIND IF TWO VECTORS ARE COLLINEAR
bool isCollinear(int *x,int *y)
{
    int *res = cross(x,y);
    if ((res[0]==0)||(res[1]==0)||(res[2]==0))
        {
            return true;
        }
        else
        {
            return false;
        }
}

// FUNCTION TO FIND UNIT VECTOR
double *unitvector(int *arr)
{
    double *unit = {0,0,0};
    double mod = modVector(arr);
    for(int i=0;i<3;i++)
    {
        unit[i] = unit[i]/mod;
    }
    return unit;
}

#endif