// C program to reverse the string



#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];

    printf("\n Enter the word = ");
    scanf("%s",&a);

    printf("\n Reversed String = %s ",strrev(a));
    return 0;
}