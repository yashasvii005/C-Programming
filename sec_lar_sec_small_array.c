#include <stdio.h>

// Function to find the second largest and second smallest numbers in an array
void findSecondLargestSmallest(int arr[], int size, int *secondLargest, int *secondSmallest) {
    int largest, smallest;

    // Initialize largest and smallest with the first two elements of the array
    if (arr[0] > arr[1]) {
        largest = arr[0];
        smallest = arr[1];
    } else {
        largest = arr[1];
        smallest = arr[0];
    }

    // Iterate through the array to find the largest and smallest
    for (int i = 2; i < size; ++i) {
        if (arr[i] > largest) {
            *secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] != largest) {
            *secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            *secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < *secondSmallest && arr[i] != smallest) {
            *secondSmallest = arr[i];
        }
    }
}

int main() {
    int arr[50], size, secondLargest, secondSmallest;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element at position %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Check if there are at least two elements in the array
    if (size < 2) {
        printf("Array should have at least two elements.\n");
        return 1;
    }

    // Find the second largest and second smallest numbers
    findSecondLargestSmallest(arr, size, &secondLargest, &secondSmallest);

    // Display the result
    printf("Second Largest number: %d\n", secondLargest);
    printf("Second Smallest number: %d\n", secondSmallest);

    return 0;
}
