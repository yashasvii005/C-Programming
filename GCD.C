#include <stdio.h>

// Function to find the Greatest Common Divisor (GCD) of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and display the GCD
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
