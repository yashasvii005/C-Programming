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

// Function to find the Least Common Multiple (LCM) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate and display the LCM
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
