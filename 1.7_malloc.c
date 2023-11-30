#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a,size;

    printf("\n Enter the size of the array = ");
    scanf("%d",&size);

    a=(int*)malloc(sizeof(int)*size);

    for(int i=0;i<size;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<size;i++)
    {
        printf(" %d",a[i]);
    }

    return 0;
}