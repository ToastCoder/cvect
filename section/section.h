/////////////////////////////////////////////////////

// CVECT

// FILE NAME: SECTION.H

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR SECTION FUNCTIONS

// HEADER FILE DEFINITION
#ifndef SECTION_H
#define SECTION_H

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"

// FUNCTION TO FIND VECTOR USING SECTION FORMULA USING INTERNAL METHOD
float *internal(int *p1, int *p2, int m, int n);

// FUNCTION TO FIND VECTOR USING SECTION FORMULA USING EXTERNAL METHOD
float *external(int *p1, int *p2, int m, int n);

#endif