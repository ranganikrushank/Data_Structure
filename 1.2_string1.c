// C program to find the length of the string



#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int length;

    printf("\n Enter the word = ");
    scanf("%s",&a);

    length=strlen(a);

    printf("\n Length of your word = %d",length);

    return 0;
}