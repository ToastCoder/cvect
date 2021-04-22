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
    return dot(cross(w,x),cross(y,z));
}

// FUNCTION TO FIND VECTOR TRIPLE PRODUCT FOR THE GIVEN THREE VECTORS
int *v3(int *x, int *y, int *z)
{
    return cross(cross(x,y),z);
}
