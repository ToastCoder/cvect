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