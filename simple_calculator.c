#include<stdio.h>
int main() {
    char operator;
    double num1, num2, result = 0;

    printf("Enter an opperator(+,-,*,/):");
    scanf(" %c", &operator);

    printf("Enter two nuumbers:");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Sum: %lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Difference: %lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Product: %lf\n", result);
        break;
    case '/':
        if(num2 != 0) {
            result = num1 / num2;
        }
        else {
            printf("Error! Division by zero is not allowed.\n");
            return 1;
        }
        printf("Quotient: %lf\n", result);
        break;
    
    default:
        printf("Error! Invalid operator.\n");
        break;
    }

    return 0;
}