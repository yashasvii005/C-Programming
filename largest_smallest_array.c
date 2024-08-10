#include <stdio.h>

// Function to find the largest and smallest numbers in an array
void findLargestSmallest(int arr[], int size, int *largest, int *smallest) {
    // Initialize largest and smallest with the first element of the array
    *largest = *smallest = arr[0];

    // Iterate through the array to find the largest and smallest
    for (int i = 1; i < size; ++i) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        } else if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

int main() {
    int arr[50], size, largest, smallest;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element at position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the largest and smallest numbers
    findLargestSmallest(arr, size, &largest, &smallest);

    // Display the result
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
