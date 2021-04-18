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
#include "area/area.h"
#include "cent/cent.h"

// FUNCTION TO CALCULATE THE DOT PRODUCT
int dot(int *x, int *y);

// FUNCTION TO CALCULATE THE CROSS PRODUCT
int *cross(int *x, int *y);

// FUNCTION TO CALCULATE THE MODULUS OF A VECTOR
float modVector(int *x);

// FUNCTION TO FIND ANGLE BETWEEN TWO VECTORS
float angle(int *x,int *y);

// FUNCTION TO FIND THE PROJECTION OF ONE VECTOR OVER ANOTHER
float projection(int *x, int *y);

// FUNCTION TO FIND IF TWO VECTORS ARE PREPENDICULAR
bool isPerpendicular(int *x, int *y);

// FUNCTION TO FIND IF TWO VECTORS ARE COLLINEAR
bool isCollinear(int *x,int *y);

// FUNCTION TO FIND UNIT VECTOR
float *unitVector(int *arr);

// FUNCTION TO FIND UNIT NORMAL
float **unitNormal(int *x, int *y);

// FUNCTION TO FIND BISECTOR OF TWO VECTORS
float *bisector(int *x, int *y);

// FUNCTION TO FIND THE POSITION VECTOR
int *positionVector(int *x, int *y);

// FUNCTION TO FIND IF TWO VECTORS ARE COPLANAR
bool isCoplanar(int *x, int *y, int *z);

// FUNCTION TO FIND THE RECIPROCAL OF THREE VECTORS
float **reciprocal(int *x, int *y, int *z);

// FUNCTION TO FIND THE MAXIMUM VALUE OF ANY TWO VECTORS
float maxValue(int *x, int *y);

// FUNCTION TO FIND THE MINIMUM VALUE OF ANY TWO VECTORS
float minValue(int *x, int *y);

#endif