/////////////////////////////////////////////////////

// CVECT

// FILE NAME: AREA.C

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR AREA FUNCTIONS

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"

// FUNCTION TO FIND AREA OF TRIANGLE WHERE ADJACENT SIDES ARE GIVEN
float triangle_adj(int *arr1, int *arr2) 
{
    return 0.5*modVector(cross(arr1,arr2));
}


// FUNCTION TO FIND AREA OF TRIANGLE WHERE POSITION VECTORS ARE GIVEN
float triangle_pos(int *arr1, int *arr2, int *arr3)
{
    int c[3];
    for (int i = 0;i<3;i++)
        c[i] = cross(arr1,arr2)[i]+cross(arr2,arr3)[i]+cross(arr3,arr1)[i];
    return modVector(c)/2;
}

// FUNCTION TO FIND THE AREA OF A QUADRILATERAL WHERE THE DIAGONALS ARE GIVEN
float quad(int *d1, int *d2)
{
    return modVector(cross(d1,d2))/2;
}

// FUNCTION TO FIND AREA OF PARALLELOGRAM WHEN TWO ADJACENT SIDES ARE GIVEN
float parallelogram(int *arr1, int *arr2)
{
    return modVector(cross(arr1,arr2));
}

// FUNCTION TO FIND THE AREA OF TETRAHEDRON WHERE POSITIONAL VECTORS ARE GIVEN
float tetrahedron(int *arr1, int *arr2, int *arr3)
{
    return abs(0.1666*dot(cross(arr1,arr2),arr3));
}
