#include <stdio.h>

int main() {
    int elements[10];

    for(int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &elements[i]);
    }
    printf("Elements in array:");
    for(int i = 0; i < 10; i++) {
        printf("%d\n", elements[i]);
    }

    return 0;
}
