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
double *unitVector(int *arr)
{
    double *unit;
    double mod = modVector(arr);
    for(int i=0;i<3;i++)
    {
        unit[i] = unit[i]/mod;
    }
    return unit;
}

// STRUCT FOR RETURNING MULTIPLE VALUES IN UNITNORMAL()
struct unormal
{
    double *u_norm;
    double *u_norm_inv;
};

typedef struct unormal u_norm;

// FUNCTION TO FIND UNIT NORMAL
u_norm unitNormal(int *x, int *y)
{
    u_norm un;
    int *cross_prod = cross(x,y);
    un.u_norm = unitVector(cross_prod);
    for (int i=0;i<3;i++)
    {
        un.u_norm_inv[i] = un.u_norm[i]*-1;
    }
    return un;
}

// FUNCTION TO FIND BISECTOR OF TWO VECTORS
double *bisector(int *x, int *y)
{
    double *bsect;
    double *unit_a = unitVector(x);
    double *unit_b = unitVector(y);
    for (int i=0;i<3;i++)
    {
        bsect[i] = unit_a[i]+unit_b[i];
    }
    return bsect;
}

// FUNCTION TO FIND THE POSITION VECTOR
double *positionVector(int *x, int *y)
{
    double *pos;
    for(int i=0;i<3;i++)
    {
        pos[i] = 0.5*(x[i]+y[i]);
    }
    return pos;
}

// FUNCTION TO FIND IF TWO VECTORS ARE COPLANAR
bool isCoplanar(int *x, int *y, int *z)
{
    int cop = dot(cross(x,y),z);
    if (cop == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// STRUCT FOR RECIPROCAL() FUNCTION
struct reci
{
    double *rec1;
    double *rec2;
    double *rec3;
};

typedef struct reci recip;

// FUNCTION TO FIND THE RECIPROCAL OF THREE VECTORS
recip reciprocal(int *x, int *y, int *z)
{
    recip r;
    int *c1 = cross(y,z);
    int *c2 = cross(z,x);
    int *c3 = cross(x,y);
    int d = dot(cross(x,y),z);

    for (int i=0;i<3;i++)
    {
        r.rec1[i] = c1[i]/d;
        r.rec2[i] = c2[i]/d;
        r.rec3[i] = c3[i]/d;
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