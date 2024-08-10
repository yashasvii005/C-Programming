#include <stdio.h>

// Function to add two matrices and store the result in a third matrix
void addMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int resultMatrix[10][10], int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], resultMatrix[10][10];
    int rows, columns;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Add matrices
    addMatrices(firstMatrix, secondMatrix, resultMatrix, rows, columns);

    // Display the result matrix
    printf("\nResultant Matrix (Sum of the matrices):\n");
    displayMatrix(resultMatrix, rows, columns);

    return 0;
}
