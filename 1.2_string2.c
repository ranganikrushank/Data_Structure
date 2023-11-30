// C program to copy one string to another



#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    char copy;

    printf("\n Enter the word you want to copy = ");
    scanf("%s",&a);

    strcpy(b,a);

    printf("\n Original String = %s",a);
    printf("\n Copied String   =   %s",b);

    return 0;
}