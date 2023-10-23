#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[5];

    for(int i=0;i<5;i++)
    {
        printf("\n Enter the elements = ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            if(a[j+1]<a[j])
            {
                int temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;   
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}