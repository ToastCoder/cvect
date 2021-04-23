/////////////////////////////////////////////////////

// CVECT

// FILE NAME: VOLUME.C

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR VOLUME FUNCTIONS

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"
#include "../section/section.h"

//FUNCTION TO FIND THE VOLUME OF PARALLELOPIPED
float parellopiped(int *x, int *y, int *z)
{
    return (float)abs(s3(x,y,z));
}