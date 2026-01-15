#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, x1, x2, d;

    printf("Enter any values of a, b and c:\n");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if(d == 0) {
        printf("Roots are real and equal.\n");
        x1 = x2 = (-b) / (2 * a);
        printf("Roots are: %.2f and %.2f", x1, x2);
    }
    else {
        if(d > 0) {
            printf("Roots are real and unequal.\n");
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are: %.2f and %.2f\n", x1, x2);
        }
        else {
            printf("Roots are imaginary");
        }
    }

    return 0;
}