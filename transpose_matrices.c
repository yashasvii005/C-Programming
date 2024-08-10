#include <stdio.h>

// Function to find the transpose of a matrix
void transposeMatrix(int matrix[10][10], int resultMatrix[10][10], int rows, int columns) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            resultMatrix[j][i] = matrix[i][j];
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
    int matrix[10][10], resultMatrix[10][10];
    int rows, columns;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the transpose
    transposeMatrix(matrix, resultMatrix, rows, columns);

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, columns);

    // Display the transposed matrix
    printf("\nTransposed Matrix:\n");
    displayMatrix(resultMatrix, columns, rows);

    return 0;
}
