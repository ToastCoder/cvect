// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
#include "area.h"
#include "../cvect.h"

// FUNCTION TO FIND AREA OF TRIANGLE WHERE ADJACENT SIDES ARE GIVEN
float triangle_adj(int *arr1, int *arr2) 
{
    int *c = cross(arr1,arr2);
    return (float)sqrt(modVector(cross(arr1,arr2)));
}