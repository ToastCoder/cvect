#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
extern "C"
{
    #include "src/cvect.h"
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

void dist_tester(int a1[], int a2[], int a3[], int a4[],int b1[],int b2[])
{
    //PL_LINE 
    float pd = pl_line(a1,a2,a3);
    printf("Distance between Two Parallel Lines : %f\n",pd);

    //SK_LINE
    float sd = sk_line(a1,a2,a3,a4);
    printf("Distance between Two Skew Lines : %f\n",sd);

    // PT_PLANE
    float pt = pt_plane(a1,b1);
    printf("Distance between point and plane : %f\n",pt);

    // OR_PLANE
    float o = or_plane(b1);
    printf("Distance between origin and plane : %f\n",o);

    // PL PLANES
    float pl = pl_planes(b2,b1);
    printf("Distance between two parallel planes: %f\n",pl);

    //DISTANCE
    float di = distance(a1,a2);
    printf("Distance between two vectors: %f\n",di);

}

void prod_tester(int a1[], int a2[], int a3[], int a4[])
{
    // s3
    int s_triple = s3(a1,a2,a3);
    printf("Scalar Triple Product : %d\n",s_triple);

    // s4
    int s_four = s4(a1,a2,a3,a4);
    printf("Scalar Quadruple Product : %d\n",s_four);

    // v3
    int *v_triple;
    v_triple = v3(a1,a2,a3);
    printf("Vector Triple Product : ");
    for (int i=0;i<3;i++)
    {
        printf("%d ",v_triple[i]);
    }
    printf("\n");

    //v4
    int *v_four;
    v_four = v4(a1,a2,a3,a4);
    printf("Vector Quadruple Product : ");
    for (int i=0;i<3;i++)
    {
        printf("%d ",v_four[i]);
    }
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
    area_tester(a1,a2,a3,a4);
    cent_tester(a1,a2,a3,a4);
    dist_tester(a1,a2,a3,a4,b1,b2);
    prod_tester(a1,a2,a3,a4);
    return 0;
}