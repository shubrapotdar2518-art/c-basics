#include<stdio.h>
int main() {
    int i, j, space, rows, num;
    printf("Enter the number of rows:");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        num = 1;

        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d", num);
            if (j < i)
            {
                num++;
            }
            else
            {
                num--;
            }
        }
        printf("\n");
    }
    return 0;
}