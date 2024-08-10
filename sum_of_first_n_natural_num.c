#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if n is a positive integer
    if (n < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        // Calculate the sum of first n natural numbers
        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        // Display the result
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}
