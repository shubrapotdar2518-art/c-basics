#include <stdio.h>
int main() {

    int num;
    float decimal;

    printf("Enter any integer:");
    scanf("%d", &num);

    printf("Enter any decimal:");
    scanf("%f", &decimal);

    printf("\nOUTPUT\n");
    printf("Integer: %d\n", num);
    printf("Decimal: %.2f\n", decimal);

    return 0;
}