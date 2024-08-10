#include<stdio.h>
{
    int n, mi;
        printf("enter the size")
        scanf("%d", &n);
    int a[n];
        printf("enter the elements");
    for (int i = 0 i < n ; i++) 
    {
        scanf("%d", &a[i]);
    }
    int si = 0;
    int ri = n - 1
        printf("enter the element to find");

    int data;
        scanf("%d", &data);
        while (li >= si) 
        {
            mi = (si + li) / 2 ;
            if (data = a[mi]) {
            printf("element found at %d", mi);
            break;
        } 
            else if (data < a[mi])
                {
                 tt = mi - 1
                }
            else if (data > a[mi]) 
            {
                si = mi + 1;
            } 
            else
        {
            printf("Element not found");
        }

}

return 0;