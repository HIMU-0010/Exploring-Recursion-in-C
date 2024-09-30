#include <stdio.h>

void multiplyMatrices(int A[][10], int B[][10], int C[][10], int rowsA, int colsA, int rowsB, int colsB)
{
    if (colsA != rowsB)
    {
        printf("Matrices cannot be multiplied.\n");
        return;
    }

    for (int i = 0; i < rowsA; ++i)
    {
        for (int j = 0; j < colsB; ++j)
        {
            C[i][j] = 0;
            for (int k = 0; k < colsA; ++k)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int rowsA, colsA, rowsB, colsB;

    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter the elements of matrix A:\n");
    for (int i = 0; i < rowsA; ++i)
    {
        for (int j = 0; j < colsA; ++j)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
    printf("Enter the elements of matrix B:\n");
    for (int i = 0; i < rowsB; ++i)
    {
        for (int j = 0; j < colsB; ++j)
        {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(A, B, C, rowsA, colsA, rowsB, colsB);

    printf("Resultant matrix:\n");
    for (int i = 0; i < rowsA; ++i)
    {
        for (int j = 0; j < colsB; ++j)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
