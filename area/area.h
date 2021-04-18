/////////////////////////////////////////////////////

// CVECT

// FILE NAME: AREA.H

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR AREA FUNCTIONS

// HEADER FILE DEFINITION
#ifndef AREA_H
#define AREA_H

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"

// FUNCTION TO FIND AREA OF TRIANGLE WHERE ADJACENT SIDES ARE GIVEN
float triangle_adj(int *arr1, int *arr2);

// FUNCTION TO FIND AREA OF TRIANGLE WHERE POSITION VECTORS ARE GIVEN
float triangle_pos(int *arr1, int *arr2, int *arr3);

// FUNCTION TO FIND THE AREA OF A QUADRILATERAL WHERE THE DIAGONALS ARE GIVEN
float quad(int *d1, int *d2);

// FUNCTION TO FIND AREA OF PARALLELOGRAM WHEN TWO ADJACENT SIDES ARE GIVEN
float parallelogram(int *arr1, int *arr2);

// FUNCTION TO FIND THE AREA OF TETRAHEDRON WHERE POSITIONAL VECTORS ARE GIVEN
float tetrahedron(int *arr1, int *arr2, int *arr3);

#endif