// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "cent.h"
#include "../cvect.h"

//FUNCTION TO FIND CENTROID IOF A TRIANGLE
float *triangle_cent(int *arr1, int *arr2, int *arr3)
{
    static float res[3];
    for(int i=0;i<3;i++)
        res[i] = 0.25*(arr1[i]+arr2[i]+arr3[i]);
    return res;
}

//FUNCTION TO FIND CENTROID OF A TETRAHEDRON
float *tetrahedron_cent(int *arr1, int *arr2, int *arr3, int *arr4)
{
    static float res[3];
    for(int i=0;i<3;i++)
        res[i] = 0.25*(arr1[i]+arr2[i]+arr3[i]+arr4[i]);
    return res;
}