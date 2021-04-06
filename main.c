#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#include "cvect.h"
void tester(int a1[],int a2[], int a3[], int a4[])
{
    // DOT TESTER
    printf("Dot Product: %d\n",dot(a1,a2));

    // CROSS TESTER
    int *c = cross(a1,a2);
    printf("Cross Product: ");
    for(int i=0;i<3;i++){printf("%d ",c[i]);}
    printf("\n");

}
int main()
{
    int a1[] = {1,2,3};
    int a2[] = {4,5,6};
    int a3[] = {7,8,9};
    int a4[] = {1,5,9};
    
    //printf("%lf",acos(1));
    tester(a1,a2,a3,a4);
    return 0;
}