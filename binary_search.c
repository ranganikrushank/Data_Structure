#include<stdio.h>

int binary_search(int arr[5],int key)
{
    int front=0,rear=4,mid;

    while(front<rear)
    {
        mid=(front+rear)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            rear=mid-1;
        }
        else
        {
            front=mid+1;
        }
    }
    return -1;
}

int main()
{
    int array[5],key,result;

    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&array[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }

    printf("\n Enter the element you want to search = ");
    scanf("%d",&key);

    result=binary_search(array,key);

    if(result== -1)
    {
        printf("\n %d is not found in the array",key);
    }
    else
    {
        printf("\n %d is found in the array at index value %d",key,result);
    }

    return 0;
}