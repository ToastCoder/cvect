/////////////////////////////////////////////////////

// CVECT

// FILE NAME: PROD.C

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "prod.h"
#include "../cvect.h"

// FUNCTION TO FIND SCALAR TRIPLE PRODUCT FOR THE GIVEN THREE VECTORS
int s3(int *x, int *y, int *z)
{
    return dot(cross(x,y),z);
}

// FUNCTION TO FIND SCALAR PRODUCT FOR THE GIVEN FOUR VECTORS
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
    return cross(cross(x,y),z);
}
