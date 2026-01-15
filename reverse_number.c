#include<stdio.h>

int main() {
    int n, rev = 0;

    printf("Enter the number:\n");
    scanf("%d", &n);

    while(n != 0) {
        rev *= 10;
        rev += (n % 10);
        n = n / 10;
    }
    printf("The reverse number is: %d", rev);

    return 0;
}