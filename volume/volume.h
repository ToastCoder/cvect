/////////////////////////////////////////////////////

// CVECT

// FILE NAME: VOLUME.H

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR VOLUME FUNCTIONS

// HEADER FILE DEFINITION
#ifndef VOLUME_H
#define VOLUME_H

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "../cvect.h"
#include "../section/section.h"

//FUNCTION TO FIND THE VOLUME OF PARALLELOPIPED
float parellopiped(int *x, int *y, int *z);

#endif