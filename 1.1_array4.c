// C program to copy one to the another array



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10],b[10];

    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&a[i]);
    }

    printf("\n-----------------------");
    printf("\n    Original Array");
    printf("\n-----------------------");
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d  ",a[i]);
    }

    for(int i=0;i<5;i++)
    {
        b[i]=a[i];
    }
    
    printf("\n");
    printf("\n");
    printf("\n-----------------------");
    printf("\n     Copied Array");
    printf("\n-----------------------");
    printf("\n");
    for(int i=0;i<5;i++)
    {
        printf("%d  ",b[i]);
    }
    return 0;
}