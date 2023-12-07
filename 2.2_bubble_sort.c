#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[100];
    int temp;

    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("  %d",arr[i]);
    }
    return 0;
}