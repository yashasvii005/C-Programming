#include <stdio.h>

// Function to calculate the square of a number
int square(int num) {
    return num * num;
}

// Function to calculate the cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int number;

    // Get user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and display the square
    printf("Square of %d is: %d\n", number, square(number));

    // Calculate and display the cube
    printf("Cube of %d is: %d\n", number, cube(number));

    return 0;
}
