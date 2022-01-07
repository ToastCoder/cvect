/////////////////////////////////////////////////////

// CVECT

// FILE NAME: SECTION.C

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR SECTION FUNCTIONS

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"

// FUNCTION TO FIND VECTOR USING SECTION FORMULA USING INTERNAL METHOD
float *internal(int *p1, int *p2, int m, int n)
{
    static float arr[3];
    for(int i=0;i<3;i++)
    {
        arr[i] = ((m*p1[i])-(n*p2[i]))/(float)(m-n);
    }
    return arr;
}

// FUNCTION TO FIND VECTOR USING SECTION FORMULA USING EXTERNAL METHOD
float *external(int *p1, int *p2, int m, int n)
{
    static float arr[3];
    for(int i=0;i<3;i++)
    {
        arr[i] = ((m*p1[i])+(n*p2[i]))/(float)(m+n);
    }
    return arr;
}