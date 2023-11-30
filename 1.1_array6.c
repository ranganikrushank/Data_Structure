//  C program to compare the array



#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10],b[10];
    int flag=0;
    int i;

    printf("\n---------------------------");
    printf("\n       First Array");
    printf("\n---------------------------");
    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d  ",a[i]);
    }

    printf("\n");
    printf("\n");
    printf("\n---------------------------");
    printf("\n      Second Array");
    printf("\n---------------------------");
    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elememts = ");
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d  ",b[i]);
    }

    if(a[i]==b[i])
    {
        printf("\n Both the arrays are same");
    }
    else
    {
        printf("\n Both the arrays are not same");
    }
    
    return 0;
}