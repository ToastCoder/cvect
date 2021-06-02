#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
extern "C"
{
    #include "cvect.h"
}

using namespace std;

void tester(int a1[],int a2[], int a3[], int a4[])
{
    // DOT TESTER
    printf("Dot Product : %d\n",dot(a4,a3));

    // CROSS TESTER
    int *c = cross(a1,a2);
    printf("Cross Product : ");
    for(int i=0;i<3;i++) printf("%d ",c[i]);
    printf("\n");
}

int main()
{
    int a1[] = {10,2,4};
    int a2[] = {4,2,6};
    int a3[] = {-7,-6,-9};
    int a4[] = {4,20,12};
    int a5[] = {1,0,0};
    int b1[] = {1,2,-2,9};
    int b2[] = {2,4,-4,-6};
    int u = 15;
    int v = 11;
    
    tester(a1,a2,a3,a4);
    return 0;
}