/////////////////////////////////////////////////////

// CVECT

// FILE NAME: PROD.H

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"

// FUNCTION TO FIND SCALAR TRIPLE PRODUCT FOR THE GIVEN THREE VECTORS
int s3(int *x, int *y, int *z);

// FUNCTION TO FIND SCALAR QUADRUPLE PRODUCT FOR THE GIVEN FOUR VECTORS
int s4(int *w, int *x, int *y, int *z);

// FUNCTION TO FIND VECTOR TRIPLE PRODUCT FOR THE GIVEN THREE VECTORS
int *v3(int *x, int *y, int *z);

// FUNCTION TO FIND VECTOR QUADRUPLE PRODUCT FOR THE GIVEN FOUR VECTORS
int *v4(int *w, int *x, int *y, int *z);