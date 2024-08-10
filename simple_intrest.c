#include <stdio.h>

int main() {
    double principal, rate, time, simple_interest;

    // Input principal amount
    printf("enter the principal amount: ");
    scanf("%lf", &principal);

    // Input interest rate
    printf("enter the annual intrest rate (as a decimal): ");
    scanf("%lf", &rate);

    // Input time period in years
    printf("enter the time period(in years): ");
    scanf("%lf", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time);

    // Display the result
    printf("Simple Interest: %.2lf\n", simple_interest);

    return 0;
}
