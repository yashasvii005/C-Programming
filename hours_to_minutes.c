#include <stdio.h>

int main() {
    int hours, minutes;

    // Input hours
    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    // Convert hours to minutes
    minutes = hours * 60;

    // Display the result
    printf("%d hours is equal to %d minutes.\n", hours, minutes);

    return 0;
}
