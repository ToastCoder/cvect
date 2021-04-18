/////////////////////////////////////////////////////

// CVECT

// FILE NAME: DIST.H

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR AREA FUNCTIONS

// HEADER FILE DEFINITION
#ifndef DIST_H
#define DIST_H

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"

// FUNCTION TO THE DISTANCE BETWEEN TWO PARALLEL LINES
float pl_line(int *a1, int *a2, int *u);

#endif