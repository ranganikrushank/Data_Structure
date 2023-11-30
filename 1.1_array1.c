// C program to Read and Display Array



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100];

    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d   ",arr[i]);
    }
    return 0;
}