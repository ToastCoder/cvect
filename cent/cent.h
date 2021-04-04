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

double *triangle(int *arr1, int *arr2, int *arr3)
{
    double *res;
    for(int i=0;i<3;i++)
        res[i] = 0.25*(arr1[i]+arr2[i]+arr3[i]);
    return res;
}

double *tetrahedron(int *arr1, int *arr2, int *arr3, int *arr4)
{
    double *res;
    for(int i=0;i<3;i++)
        res[i] = 0.25*(arr1[i]+arr2[i]+arr3[i]+arr4[i]);
    return res;
}

#endif