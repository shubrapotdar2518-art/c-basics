#include<stdio.h>
int main() {
    int row, col, i, j;
    int matrix1[10][10], matrix2[10][10], sum[10][10];

    printf("Enter numbers of rows and columns:\n");
    scanf("%d %d", &row, &col);

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix1[i][j]);
        } 
    }
    
    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix2[i][j]);
        } 
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        } 
    }

    printf("Sum of matrices:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d", sum[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}