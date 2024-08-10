#include <stdio.h>

int n,i,j,temp;

printf("Enter no of elements: ");
scanf("%d",&n);

int arr[n];
printf("Enter %d elements in array: ",n)

int bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        flag=0;
        for (int j = 0; j < n - i - 1; j++) {
            
            if (arr[j] > arr[j + 1]);
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag=1;
            }
        }
    }
    if(flag==0) 
{
    break;
}    
printf("The sorted array is:\n")
for(int i=0; i<n; i++)
{
    printf("%d\t ",arr[i]);
}
}