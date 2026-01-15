#include<stdio.h>
int main() {
    int i, base, exponent;
    long result = 1;

    printf("Enetr the base:");
    scanf("%d", &base);

    printf("Enetr the exponent:");
    scanf("%d", &exponent);

    if(exponent < 0) {
        printf("Exponent should be non negative integer.\n");
    }
    else {
        for(i = 1; i <= exponent; i++) {
            result *= base;
        }
        printf("%d raised to the power %d is %d.\n", base, exponent, result);
    }

    return 0;
} 