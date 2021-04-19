#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#include "cvect.h"
void tester(int a1[],int a2[], int a3[], int a4[])
{
    // DOT TESTER
    printf("Dot Product : %d\n",dot(a4,a3));

    // CROSS TESTER
    int *c = cross(a1,a2);
    printf("Cross Product : ");
    for(int i=0;i<3;i++) printf("%d ",c[i]);
    printf("\n");

    // MODVECTOR TESTER
    printf("Modulus of vector : %f\n",modVector(a3));

    // ANGLE TESTER
    printf("Angle : %f\n",angle(a1,a2));

    // PRPJECTION TESTER
    printf("Projection : %f\n",projection(a2,a3));

    //ISPERPENDICULAR TESTER
    printf("IsPerpendicular : %d\n",isPerpendicular(a2,a4));

    // ISCOLLINEAR TESTER
    printf("IsCollinear : %d\n",isCollinear(a2,a3));

    // UNIT VECTOR TESTER
    float *res = unitVector(a3);
    printf("Unit Vector : ");
    for(int i=0;i<3;i++) printf("%f ",res[i]);
    printf("\n");

    //UNITNORMAL TESTER
    float **arr;
    arr = unitNormal(a2,a3);
    printf("Unit Normal : \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%f ",arr[i][j]);
        }
        printf("\n");
    }

    //BISECTOR TESTER
    float *bs;
    bs = bisector(a1,a2);
    printf("Bisector: ");
    for (int i=0;i<3;i++)
    {
        printf("%f ",bs[i]);
    }
    printf("\n");

    //POSITION TESTER
    int *pv;
    pv = positionVector(a1,a2);
    printf("Position Vector: ");
    for (int i=0;i<3;i++)
    {
        printf("%d ",pv[i]);
    }
    printf("\n");

    // ISCOPLANAR TESTER
    printf("IsCoplanar : %d\n",isCoplanar(a1,a2,a3));

    //RECIPROCAL TESTER
    float **rec;
    rec = reciprocal(a1,a2,a3);
    printf("Reciprocal : \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%f ",rec[i][j]);
        }
        printf("\n");
    }

    // MINVALUE TESTER
    printf("minValue : %f\n",minValue(a1,a2));

    // MAXVALUE TESTER
    printf("maxValue : %f\n",maxValue(a1,a2));
}

void area_tester(int a1[],int a2[],int a3[],int a4[])
{
    // TRIANGLE ADJ TESTER
    printf("Triangle Adj Area : %f\n",triangle_adj(a1,a2));

    // TRIANGLE POS TESTER
    printf("Triangle Pos Area : %f\n",triangle_pos(a1,a2,a3));

    // QUADRILATERAL AREA TESTER
    printf("Quadrilateral Area : %f\n",quad(a1,a2));

    // PARALLELOGRAM AREA TESTER
    printf("Parallelogram Area : %f\n",parallelogram(a1,a2));

    // TETRAHEDRON AREA TESTER
    printf("Tetrahedron Area : %f\n",tetrahedron(a1,a2,a3));

}


void cent_tester(int a1[], int a2[], int a3[], int a4[])
{
    //TRIANGLE TESTER
    float *tr;
    tr = triangle_cent(a1,a2,a3);
    printf("Centroid (Triangle) : \n");
    for (int i=0;i<3;i++)
    {
        printf("%f ",tr[i]);
    }
    printf("\n");

    //TETRAHEDRON TESTER
    float *tet;
    tet = tetrahedron_cent(a1,a2,a3,a4);
    printf("Centroid (Tetrahedron) : \n");
    for (int i=0;i<3;i++)
    {
        printf("%f ",tet[i]);
    }
    printf("\n");
}

void dist_tester(int a1[], int a2[], int a3[], int a4[])
{
    //PL_LINE 
    float pd = pl_line(a1,a2,a3);
    printf("Distance between Two Parallel Lines : %f\n",pd);

    float sd = sk_line(a1,a2,a3,a4);
    printf("Distance between Two Skew Lines : %f\n",sd);
}

int main()
{
    int a1[] = {10,2,4};
    int a2[] = {4,2,6};
    int a3[] = {-7,-6,-9};
    int a4[] = {4,20,12};
    int a5[] = {1,0,0};
    
    //printf("%d\n",cross(a2,a4)[2]);

    tester(a1,a2,a3,a4);
    area_tester(a1,a2,a3,a4);
    cent_tester(a1,a2,a3,a4);
    dist_tester(a1,a2,a3,a4);
    return 0;
}