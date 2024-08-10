#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Input temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9/5) + 32;

    // Display the result
    printf("%.2lf degrees Celsius is equal to %.2lf degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
