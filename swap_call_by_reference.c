#include<stdio.h>
void cyclicswap(int *a, int *b, int *c) {
    int temp;
    temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}
int main() {
    int x, y, z;

    printf("Enter three numbers:\n");
    scanf("%d %d %d", &x, &y, &z);

    printf("Before swapping:\n");
    printf("x = %d\ny = %d\nz = %d\n", x, y, z);

    cyclicswap(&x, &y, &z);

    printf("After cyclic swapping:\n");
    printf("x = %d\ny = %d\nz = %d\n", x, y, z);

    return 0;
}