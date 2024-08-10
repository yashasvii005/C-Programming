#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to iterate through rows
    for (int i = 1; i <= rows; ++i) {
        // Loop to print asterisks in each row
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
