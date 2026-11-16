#include <stdio.h>

void  main() {
    float principal, rate, time, simpleInterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("\nSimple Interest = %.2f\n", simpleInterest);
    printf("Total Amount = %.2f\n", principal + simpleInterest);
}
