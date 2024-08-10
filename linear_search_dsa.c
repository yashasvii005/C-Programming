#include<stdio.h>

int main() {
    int a, b;
    printf("Enter array size: ");
    scanf("%d", &a);

    int arr[a];
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value: ");
    scanf("%d", &b);

    for(int i = 0; i < a; i++) {
        if(arr[i] == b) {
            printf("Found\n");
            return 0;
        }
    }

    printf("Not found\n");
    return 0;
}