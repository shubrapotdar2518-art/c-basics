#include<stdio.h>

int main() {
    float P, R, T, SI, CI, amt, factor;
    int i;

    printf("Enter Principal amount:");
    scanf("%f", &P);

    printf("Enter Rate of interest:");
    scanf("%f", &R);

    printf("Enter Time(in years):");
    scanf("%f", &T);

    SI = (P * R * T) / 100;

    factor = 1 + (R / 100);
    amt = P;

    for(i = 1; i <= T; i++) {
        amt = amt * factor;
    }
    CI = amt - P;

    printf("Simple Interest: %.2f\n", SI);
    printf("Compound Interest: %.2f", CI);

    return 0;
}