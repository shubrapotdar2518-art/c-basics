#include<stdio.h>
int main() {
    int row, col, i, j;
    int matrix[10][10], transpose[10][10];

    printf("Enter numbers of rows and columns:\n");
    scanf("%d %d", &row, &col);

    printf("Enter the elements of matrix:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        } 
    }
    
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            transpose[j][i] = matrix[i][j];
        } 
    }

    printf("Transpose of matrix:\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d", transpose[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}