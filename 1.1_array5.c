// C program to reverse the array 



#include <stdio.h>
#include <stdlib.h>
#define n 5

int main()
{
    int arr[100];
    int temp;

    for(int i=0;i<5;i++)
    {
        printf("\n Enter the element = ");
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<n/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}