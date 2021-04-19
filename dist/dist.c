/////////////////////////////////////////////////////

// CVECT

// FILE NAME: DIST.C

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "dist.h"
#include "../cvect.h"

// FUNCTION TO THE DISTANCE BETWEEN TWO PARALLEL LINES
float pl_line(int *a1, int *a2, int *u)
{
    int d[3];
    for(int i=0;i<3;i++) d[i] = a2[i] - a1[i];
    float x = modVector(cross(u,d));
    return x/modVector(u);
}

// FUNCTION TO FIND THE DISTANCE BETWEEN TWO SKEW LINES
float sk_line(int *a1, int *a2, int *u, int *v)
{
    int arr[3];
    for (int i = 0; i<3; i++) arr[i] = a2[i] - a1[i];
    int x = arr[0]*(u[1]*v[2] - (u[2]*v[1])) - (arr[1]*(u[0]*v[2] - (u[2]*v[0]))) + (arr[2]*(u[0]*v[1] - (u[1]*v[0])));
    return (float)abs(x/modVector(cross(u,v)));
}