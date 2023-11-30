// C program to concate the string



#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];

    printf("\n Enter the first string  = ");
    scanf("%s",&a);

    printf("\n Enter the second string = ");
    scanf("%s",&b);

    strcat(a,b);

    printf("\n Concated Words = %s",a);
    return 0;
}