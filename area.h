/////////////////////////////////////////////////////

// PYVECT-C

// FILE NAME: AREA.H

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR AREA FUNCTIONS

// HEADER FILE DEFINITION
#ifndef AREA_H
#define AREA_H

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "pyvect.h"

// FUNCTION TO FIND AREA OF TRIANGLE WHERE ADJACENT SIDES ARE GIVEN
double triangle_adj(int *arr1, int *arr2) 
    {
        int *c = cross(arr1, arr2);
        double mod = modVector(c);
        double res = abs(sqrt(mod));
        return res;
    }

// FUNCTION TO FIND AREA OF TRIANGLE WHERE POSITION VECTORS ARE GIVEN
double triangle_pos(int *arr1, int *arr2, int *arr3)
    {
        int *c1 = cross(arr1,arr2);
        int *c2 = cross(arr2,arr3);
        int *c3 = cross(arr3,arr1);
        int *c;
        
        for (int i = 0;i<3;i++)
        {
            c[i] = c1[i]+c2[i]+c3[i];
        }

        return abs(0.5*modVector(c));
    }

// FUNCTION TO FIND THE AREA OF A QUADRILATERAL WHERE THE DIAGONALS ARE GIVEN
double quad(int *d1, int *d2)
    {
        return abs(sqrt(modVector(cross(d1, d2))));
    }

#endif