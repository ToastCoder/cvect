/////////////////////////////////////////////////////

// CVECT

// FILE NAME: PROD.C

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR VECTOR PRODUCT FUNCTIONS

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"

// FUNCTION TO FIND SCALAR TRIPLE PRODUCT FOR THE GIVEN THREE VECTORS
int s3(int *x, int *y, int *z)
{
    return dot(cross(x,y),z);
}

// FUNCTION TO FIND SCALAR QUADRUPLE PRODUCT FOR THE GIVEN FOUR VECTORS
int s4(int *w, int *x, int *y, int *z)
{
    int c1[3], c2[3];
    for(int i=0;i<3;i++) c1[i] = cross(w,x)[i];
    for(int i=0;i<3;i++) c2[i] = cross(y,z)[i];
    return (dot(c1,c2));
}

// FUNCTION TO FIND VECTOR TRIPLE PRODUCT FOR THE GIVEN THREE VECTORS
int *v3(int *x, int *y, int *z)
{
    int c1[3];
    for(int i=0;i<3;i++) c1[i] = cross(x,y)[i];
    return cross(c1,z);
}

// FUNCTION TO FIND VECTOR QUADRUPLE PRODUCT FOR THE GIVEN FOUR VECTORS
int *v4(int *w, int *x, int *y, int *z)
{
    int c1[3], c2[3];
    for(int i=0;i<3;i++) c1[i] = cross(w,x)[i];
    for(int i=0;i<3;i++) c2[i] = cross(y,z)[i];
    return (cross(c1,c2));
}