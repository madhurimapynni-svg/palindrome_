#include <stdio.h>

int main() {
    int a, b;

    // Read two numbers
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    // Bitwise operations
    printf("\n===== Bitwise Operations =====\n");
    printf("a & b (AND)        = %d\n", a & b);
    printf("a | b (OR)         = %d\n", a | b);
    printf("a ^ b (XOR)        = %d\n", a ^ b);
    printf("~a (NOT)           = %d\n", ~a);
    printf("~b (NOT)           = %d\n", ~b);
    printf("a << 1 (Left Shift)= %d\n", a << 1);
    printf("b << 1 (Left Shift)= %d\n", b << 1);
    printf("a >> 1 (Right Shift)= %d\n", a >> 1);
    printf("b >> 1 (Right Shift)= %d\n", b >> 1);

    return 0;
}

