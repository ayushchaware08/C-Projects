// MATRIX MULTIPLICATION
// first check matric row column
// let m1:2x2 and m2:2x3 therefore it can be multiplied
// so the general formula for this is
// Cij = ai1.b1j + ai2.b2j + ..... + ain.anj
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    // first matrix
    printf("Enter the first matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter the  %d %d element of first matrix\n", i, j);
            scanf("%d", &a[i][j]);
            // printf("\t");
        }
        // printf("\n");
    }
    // second matrix
    printf("ENter the Second matrix\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Enter the  %d %d element of first matrix\n", i, j);
            scanf("%d", &b[i][j]);
            // printf("\t");
            
        }
        // printf("\n");
    }
    // Resultant matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // to calc result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    // to print the resultant matrix
    for (int i = 0; i < 3; i++)
    {
        // print the result
        for (int j = 0; j < 2; j++)
        {
        printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}