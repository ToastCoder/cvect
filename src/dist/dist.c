/////////////////////////////////////////////////////

// CVECT

// FILE NAME: DIST.C

// DEVELOPED BY: VIGNESHWAR RAVICHANDAR, MOULISHANKAR M R

// LICENSE: MIT LICENSE

/////////////////////////////////////////////////////

// SUB HEADER FILE FOR DISTANCE FUNCTIONS

// REQUIRED LIBRARY FILES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// REQUIRED SUBHEADERS
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
    float x = arr[0]*(u[1]*v[2] - (u[2]*v[1])) - (arr[1]*(u[0]*v[2] - (u[2]*v[0]))) + (arr[2]*(u[0]*v[1] - (u[1]*v[0])));
    float res = x/modVector(cross(u,v)) > 0 ? x/modVector(cross(u,v)) : -(x/modVector(cross(u,v)));
    return res;
}

// FUNCTION TO FIND THE DISTANCE BETWEEN A POINT AND A PLANE
float pt_plane(int *point, int *plane)
{
    float x = (float)abs(((plane[0]*point[0])+(plane[1]*point[1])+(plane[2]*point[2])+plane[3]));
    float y = (float)pow((plane[0]*plane[0])+(plane[1]*plane[1])+(plane[2]*plane[2]),0.5);
    return x/y;
}

// FUNCTION TO FIND THE DISTANCE BETWEEN THE ORIGIN AND A PLANE
float or_plane(int *plane)
{
        return (float)abs(plane[3]/(pow((plane[0]*plane[0])+(plane[1]*plane[1])+(plane[2]*plane[2]),0.5)));
}

// FUNCTION TO FIND THE DISTANCE BETWEEN TWO PARALLEL PLANES
float pl_planes(int *plane1, int *plane2)
{
    if (plane1[0]%plane2[0] == 0)
    {
        int x = plane1[0]/plane2[0];
        for (int i=0;i<4;i++) plane2[i] *= x;
    }
    else if (plane2[0]%plane1[0] == 0)
    {
        int x = plane2[0]/plane1[0];
        for (int i=0;i<4;i++) plane1[i] *= x;
    }
        
    return (float)abs(plane2[3]-plane1[3])/(pow((plane1[0]*plane2[0])+(plane1[1]*plane2[1])+(plane1[2]*plane2[2]),0.5));
}

// FUNCTION TO FIND THE DISTANCE BETWEEN TWO VECTORS
float distance(int *vector1, int *vector2)
{
    int sum = 0;
    for(int i=0;i<3;i++) sum += pow(vector2[i]-vector1[i], 2);
    return (float)sqrt(sum);
}

