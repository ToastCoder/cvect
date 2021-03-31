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
#include "cent.h"

// STRUCT FOR RETURNING MULTIPLE VALUES IN UNITNORMAL()
struct unormal
{
    double *u_norm;
    double *u_norm_inv;
};

// STRUCT FOR RECIPROCAL() FUNCTION
struct reci
{
    double *rec1;
    double *rec2;
    double *rec3;
};

// FUNCTION TO CALCULATE THE DOT PRODUCT
int dot(int *x, int *y)
{
    int dot_product;
    for(int i = 0; i<3; i++)
        dot_product = dot_product + (x[i]*y[i]);
    return dot_product;
}

// FUNCTION TO CALCULATE THE CROSS PRODUCT
int *cross(int *x, int *y)
{
    int *cross_product;
    cross_product[0] = x[1]*y[2] - x[2]*y[1];
    cross_product[1] = x[2]*x[0] - x[0]*y[2];
    cross_product[2] = x[0]*y[1] - x[1]*y[0];
    return cross_product;
}

// FUNCTION TO CALCULATE THE MODULUS OF A VECTOR
double modVector(int *x)
{
    return sqrt((x[0]^2)+(x[1]^2)+(x[2]^2));;
}

// FUNCTION TO FIND ANGLE BETWEEN TWO VECTORS
double angle(int *x,int *y)
{
    return acos((dot(x,y))/(modVector(x)*modVector(y)));;
}

// FUNCTION TO FIND THE PROJECTION OF ONE VECTOR OVER ANOTHER
double projection(int *x, int *y)
{
    return dot(x,y)/modVector(y);
}

// FUNCTION TO FIND IF TWO VECTORS ARE PREPENDICULAR
bool isPerpendicular(int *x, int *y)
{
    (dot(x,y) == 0)?return true:return false;
}

// FUNCTION TO FIND IF TWO VECTORS ARE COLLINEAR
bool isCollinear(int *x,int *y)
{
    int *res = cross(x,y);
    ((res[0]==0)||(res[1]==0)||(res[2]==0))?return true:return false;
}

// FUNCTION TO FIND UNIT VECTOR
double *unitVector(int *arr)
{
    double *unit;
    for(int i=0;i<3;i++)
        unit[i] = unit[i]/modVector(arr);
    return unit;
}

// FUNCTION TO FIND UNIT NORMAL
struct unormal unitNormal(int *x, int *y)
{
    unormal un;
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
    (dot(cross(x,y),z) == 0)?return true:return false;
}

// FUNCTION TO FIND THE RECIPROCAL OF THREE VECTORS
struct reci reciprocal(int *x, int *y, int *z)
{
    reci r;
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

#endif