#include <stdio.h>

int SetMatrixZero(int mat[][3], int n)
{

    // Creating an new matrix & set all values as "1"
    int findMat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            findMat[i][j] = 1;
        }
    }

    // Program to set values as "0" in new matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 0)
            {
                // To set column as "0" in new matrix
                for (int r = 0; r < n; r++)
                {
                    findMat[r][j] = 0;
                }
                // To set Row as "0" in new matrix
                for (int c = 0; c < n; c++)
                {
                    findMat[i][c] = 0;
                }
            }
        }
    }

    // To print the output based on the comparision between new matrix and given matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (findMat[i][j] == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}

int main()
{
    int n = 3;
    int matrix[3][3] = {{1, 2, 3},
                        {4, 0, 6},
                        {7, 8, 9}};
    SetMatrixZero(matrix, n);
    return 0;
}