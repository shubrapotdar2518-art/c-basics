#include<stdio.h>
int main() {
    int n, i;
    float sum = 0.0, average;
    float arr[100];

    printf("Enter the number of elements:");
    scanf("%d", &n);

    printf("Enter %d elments:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
        sum = sum + arr[i];
    }
    average = sum / n;
    printf("Average: %.2f\n", average);
    
    return 0;
}