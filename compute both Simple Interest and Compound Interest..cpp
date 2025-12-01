#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, SI, CI, Amount;

    // Read inputs
    printf("Enter Principal Amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time Period: ");
    scanf("%f", &T);

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest
    Amount = P * pow((1 + R / 100), T);
    CI = Amount - P;

    // Display Results
    printf("\n===== Interest Calculation =====\n");
    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}

