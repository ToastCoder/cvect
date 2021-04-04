#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#include "cvect.h"
void tester(int a1[3],int a2[3], int a3[3], int a4[3])
{
    printf("%d\n",dot(a1,a2));
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