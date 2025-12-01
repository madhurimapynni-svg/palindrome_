#include <stdio.h>

int main() {
    float a, b, result;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);

    printf("\n===== Calculator Menu =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = a + b;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if (b != 0) {
                result = a / b;
                printf("Result = %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;

        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}

