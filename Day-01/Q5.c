//WAP to create 4 function calculator
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

float div(int a, int b) {
    if (b == 0) {
        printf("Division by zero is not possible.\n");
        return 0;
    }
    return (float)a / b;
}

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("\nCalculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Addition = %d", add(a, b));
            break;

        case 2:
            printf("Subtraction = %d", sub(a, b));
            break;

        case 3:
            printf("Multiplication = %d", mul(a, b));
            break;

        case 4:
            printf("Division = %.2f", div(a, b));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}