#include <stdio.h>

// Function to find the largest and smallest elements
void findLargestSmallest(int arr[], int size, int *largest, int *smallest) {
    // Initialize largest and smallest with the first element of the array
    *largest = *smallest = arr[0];

    // Iterate through the array to find the largest and smallest elements
    for (int i = 1; i < size; i++) {
        if (arr[i] > *largest) {
            *largest = arr[i];
        } else if (arr[i] < *smallest) {
            *smallest = arr[i];
        }
    }
}

int main() {
    int arr[] = {23, 56, 12, 89, 5, 73, 42, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest, smallest;

    findLargestSmallest(arr, size, &largest, &smallest);

    printf("Largest Element: %d\n", largest);
    printf("Smallest Element: %d\n", smallest);

    return 0;
}

