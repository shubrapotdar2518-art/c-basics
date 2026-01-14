#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sum, avg;

    printf("Enter marks of 3 subjects:");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    sum = sub1 + sub2 + sub3;
    avg = sum / 3;
    
    printf("Sum of marks: %d\n", sum);
    printf("Average of marks: %d", avg);

    return 0;
}