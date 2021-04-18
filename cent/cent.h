/////////////////////////////////////////////////////

// CVECT

// FILE NAME: CENT.H

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR CENT FUNCTIONS

// HEADER FILE DEFINITION
#ifndef CENT_H
#define CENT_H

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"

//FUNCTION TO FIND CENTROID IOF A TRIANGLE
float *triangle(int *arr1, int *arr2, int *arr3);

//FUNCTION TO FIND CENTROID OF A TETRAHEDRON
float *tetrahedron(int *arr1, int *arr2, int *arr3, int *arr4);

#endif