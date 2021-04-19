/////////////////////////////////////////////////////

// CVECT

// FILE NAME: CVECT.C

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "cvect.h"

// FUNCTION TO CALCULATE THE DOT PRODUCT
int dot(int *x, int *y)
{
    int dot_product = 0;
    for(int i = 0; i<3; i++)
        dot_product = dot_product + (x[i]*y[i]);
    return dot_product;
}

// FUNCTION TO CALCULATE THE CROSS PRODUCT
int *cross(int *x, int *y)
{
    static int cross_product[3];
    cross_product[0] = x[1]*y[2] - x[2]*y[1];
    cross_product[1] = (x[0]*y[2] - x[2]*y[0])*-1;
    cross_product[2] = x[0]*y[1] - x[1]*y[0];
    return cross_product;
}

// FUNCTION TO CALCULATE THE MODULUS OF A VECTOR
float modVector(int *x)
{   
    return (float)sqrt((x[0]*x[0])+(x[1]*x[1])+(x[2]*x[2]));
}

// FUNCTION TO FIND ANGLE BETWEEN TWO VECTORS
float angle(int *x,int *y)
{ 
    return (float)acos((dot(x,y)/(modVector(x)*modVector(y))));
}

// FUNCTION TO FIND THE PROJECTION OF ONE VECTOR OVER ANOTHER
float projection(int *x, int *y)
{
    return dot(x,y)/modVector(y);
}

// FUNCTION TO FIND IF TWO VECTORS ARE PREPENDICULAR
bool isPerpendicular(int *x, int *y)
{
    bool res = (dot(x,y) == 0)?true:false;
    return res;
}

// FUNCTION TO FIND IF TWO VECTORS ARE COLLINEAR
bool isCollinear(int *x,int *y)
{
    int *c = cross(x,y);
    bool result = ((c[0]==0)&&(c[1]==0)&&(c[2]==0))?true:false;
    return result;
}

// FUNCTION TO FIND UNIT VECTOR
float *unitVector(int *arr)
{
    static float unit[3];
    for(int i=0;i<3;i++)
        unit[i] = arr[i]/modVector(arr);
    return unit;
}

// FUNCTION TO FIND UNIT NORMAL
float **unitNormal(int *x, int *y)
{
    float *temp = unitVector(cross(x,y));
    float **arr=(float **)malloc(sizeof(float *)*2);
    for(int i=0;i<2;i++)
    {
        arr[i]=(float *)malloc(sizeof(float)*3);
        for(int j=0;j<3;j++)
        {
            if (i==0) arr[i][j] = temp[j];
            else arr[i][j] = temp[j]*-1;
        }
    }
    return arr;
}

// FUNCTION TO FIND BISECTOR OF TWO VECTORS
float *bisector(int *x, int *y)
{
    static float bsect[3];
    float *unit_a = unitVector(x);
    float *unit_b = unitVector(y);
    for (int i=0;i<3;i++)
        bsect[i] = unit_a[i]+unit_b[i];
    return bsect;
}

// FUNCTION TO FIND THE POSITION VECTOR
int *positionVector(int *x, int *y)
{
    static int pos[3];
    for(int i=0;i<3;i++)
        pos[i] = 0.5*(x[i]+y[i]);
    return pos;
}

// FUNCTION TO FIND IF TWO VECTORS ARE COPLANAR
bool isCoplanar(int *x, int *y, int *z)
{
    if (dot(cross(x,y),z) == 0)
        return true;
    else
        return false;
}

// FUNCTION TO FIND THE RECIPROCAL OF THREE VECTORS
float **reciprocal(int *x, int *y, int *z)
{   
    int *t = cross(x,y);
    float **r=(float **)malloc(sizeof(float *)*3);
    for (int i=0;i<3;i++)
    {
        r[i]=(float *)malloc(sizeof(float)*3);
        for (int j=0;j<3;j++)
        {
            if (i == 0)
                r[i][j] = ((float)cross(y,z)[j]/(dot(cross(x,y),z)));
            else if (i == 1)
                r[i][j] = ((float)cross(z,x)[j]/(dot(cross(x,y),z)));
            else
                r[i][j] = ((float)cross(x,y)[j]/(dot(cross(x,y),z)));
        }
    }
    return r;
}

// FUNCTION TO FIND THE MAXIMUM VALUE OF ANY TWO VECTORS
float maxValue(int *x, int *y)
{
    return modVector(x)*modVector(y);
}

// FUNCTION TO FIND THE MINIMUM VALUE OF ANY TWO VECTORS
float minValue(int *x, int *y)
{
    return -1.0*(modVector(x)*modVector(y));
}