#include <stdio.h>

int main() {
    int number;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
   //printf("%d",number);

    return 0;
}
