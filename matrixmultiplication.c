#include "stdio.h"
// Matrix multiplication with demo data

/*
    Algorithm MATMUL(A,B,C,M,N,P)
    Let A be an MxP matrix array and let B a PxN matrix array.
    This algorithm stores the product of A and B in an MxN matrix array C.
        1. Repeat step 2 to 4 for I=1 to M:
        2.  Repeat steps 3 and 4 for J=1 to N
        3.  let C[I,J]:=0 [Initializes C[I,J]
        4.  Repeat for K=1 to P:
                C[I,J]:= C[I,J] + A[I,K] * B[K,J]
                [End of inner loop]
            [End of step 2 inner loop]
        5. Exit
*/

int main()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][2] = {{10,11},{20,21}, {30,31}};
    int c[2][2] = {0};
    int i,j, k;
    for(i = 0; i < 2; i++)
    {
        for(j=0;j < 2;j++)
        {
            for(k=0;k < 3;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Sample I/O:
 140 146
 320 335
*/
