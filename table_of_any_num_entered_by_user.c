#include <stdio.h>

int main() {
    int number;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Print the multiplication table for the entered number
    printf("Multiplication table for %d:\n", number);
    
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    
    return 0;
}
