#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#include "cvect.h"
void tester(int a1[3],int a2[3], int a3[3], int a4[3])
{
    int *arr = cross(a1,a2);
    for(int i=0;i<3;i++) printf("%d",arr[i]);
}
int main()
{
    int a1[3] = {1,2,3};
    int a2[3] = {4,5,6};
    int a3[3] = {7,8,9};
    int a4[3] = {1,5,9};
    tester(a1,a2,a3,a4);
    return 0;
}