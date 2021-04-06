/////////////////////////////////////////////////////

// CVECT

// FILE NAME: CVECT.H

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// MAIN HEADER FILE FOR THE LIBRARY CVECT

// HEADER FILE DEFINITION
#ifndef CVECT_H
#define CVECT_H

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
//#include "area/area.h"
//#include "cent/cent.h"


// STRUCT FOR RETURNING MULTIPLE VALUES IN UNITNORMAL()
struct unormal
{
    float *u_norm;
    float *u_norm_inv;
};

// STRUCT FOR RECIPROCAL() FUNCTION
struct reci
{
    float *rec1;
    float *rec2;
    float *rec3;
};

typedef struct unormal u_norm;
typedef struct reci recip;


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
    cross_product[1] = x[2]*x[0] - x[0]*y[2];
    cross_product[2] = x[0]*y[1] - x[1]*y[0];
    return cross_product;
}

// FUNCTION TO CALCULATE THE MODULUS OF A VECTOR
float modVector(int *x)
{   
    return (float)sqrt((x[0]^2)+(x[1]^2)+(x[2]^2));
}

// FUNCTION TO FIND ANGLE BETWEEN TWO VECTORS
float angle(int *x,int *y)
{ 
    return (float)(dot(x,y)/(modVector(x)*modVector(y)));
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
/*
// FUNCTION TO FIND UNIT NORMAL
u_norm unitNormal(int *x, int *y)
{
    u_norm un;
    un.u_norm = unitVector(cross(x,y));
    for (int i=0;i<3;i++)
        un.u_norm_inv[i] = un.u_norm[i]*-1;
    return un;
}

// FUNCTION TO FIND BISECTOR OF TWO VECTORS
double *bisector(int *x, int *y)
{
    double *bsect;
    double *unit_a = unitVector(x);
    double *unit_b = unitVector(y);
    for (int i=0;i<3;i++)
        bsect[i] = unit_a[i]+unit_b[i];
    return bsect;
}

// FUNCTION TO FIND THE POSITION VECTOR
double *positionVector(int *x, int *y)
{
    double *pos;
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
recip reciprocal(int *x, int *y, int *z)
{
    recip r;
    int *c1 = cross(y,z);
    int *c2 = cross(z,x);
    int *c3 = cross(x,y);
    for (int i=0;i<3;i++)
    {
        r.rec1[i] = c1[i]/dot(cross(x,y),z);
        r.rec2[i] = c2[i]/dot(cross(x,y),z);
        r.rec3[i] = c3[i]/dot(cross(x,y),z);
    }
    return r;
}

// FUNCTION TO FIND THE MAXIMUM VALUE OF ANY TWO VECTORS
double maxValue(int *x, int *y)
{
    return modVector(x)*modVector(y);
}

// FUNCTION TO FIND THE MINIMUM VALUE OF ANY TWO VECTORS
double minValue(int *x, int *y)
{
    return -1.0*(modVector(x)*modVector(y));
}
*/
#endif