#include <stdio.h>

// Function to multiply two matrices and store the result in a third matrix
void multiplyMatrices(int firstMatrix[10][10], int secondMatrix[10][10], int resultMatrix[10][10], int rowFirst, int colFirst, int rowSecond, int colSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            resultMatrix[i][j] = 0;
            for (int k = 0; k < colFirst; ++k) {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
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
    int rowFirst, colFirst, rowSecond, colSecond;

    // Input dimensions of the first matrix
    printf("Enter the number of rows for the first matrix: ");
    scanf("%d", &rowFirst);
    printf("Enter the number of columns for the first matrix: ");
    scanf("%d", &colFirst);

    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colFirst; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Input dimensions of the second matrix
    printf("Enter the number of rows for the second matrix: ");
    scanf("%d", &rowSecond);
    printf("Enter the number of columns for the second matrix: ");
    scanf("%d", &colSecond);

    // Check if matrices can be multiplied
    if (colFirst != rowSecond) {
        printf("Matrices cannot be multiplied due to incompatible dimensions.\n");
        return 1;
    }

    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < rowSecond; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, rowFirst, colFirst, rowSecond, colSecond);

    // Display the result matrix
    printf("\nResultant Matrix (Multiplication of the matrices):\n");
    displayMatrix(resultMatrix, rowFirst, colSecond);

    return 0;
}
.