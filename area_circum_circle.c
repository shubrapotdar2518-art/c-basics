#include <stdio.h>

int main() {

    float r, a, c;
    float pi = 3.14;

    printf("Enter the Radius:");
    scanf("%f", &r);

    a = pi * r * r;
    c = 2 * pi * r;

    printf("Area of Circle: %.2f\n", a);
    printf("Circumference of Circle: %.2f", c);

    return 0;
}