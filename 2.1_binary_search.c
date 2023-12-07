#include<stdio.h>
#include<stdlib.h>


int binary_search(int array[5],int key)
{
    int mid,front=0,rear=4;

    mid=(front+rear)/2;

    while(front<rear)
    {
        if(array[mid]==key)
        {
            return mid;
        }
        else if(array[mid]>key)
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
    int key,arr[10],result;

    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n Enter the element you want to search = ");
    scanf("%d",&key);

    result=binary_search(arr,key);

    if(result==-1)
    {
        printf("\n %d Element is not found ",key);
    }
    else
    {
        printf("\n %d Element is found at position %d",key,result);
    }
    return 0;
}