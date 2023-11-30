// C program to compare the two strings



#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b[100];
    int length1,length2;
    printf("\n Enter the first string = ");
    scanf("%s",a);
    printf("\n Enter the second string = ");
    scanf("%s",b);

    length1=strlen(a);
    length2=strlen(b);
    
    printf("\n-----------------------------------------------");
    printf("\n Length of string one = %d",length1);
    printf("\n");
    printf("\n Length of string two = %d",length2);
    printf("\n-----------------------------------------------");

    if(length1>length2)
    {
        printf("\n-----------------------------------------------------------------");
        printf("\n            String one is Greater that is '%s'",a);
        printf("\n-----------------------------------------------------------------");
    }
    else
    {
        printf("\n-----------------------------------------------------------------");
        printf("\n            String two is Greater that is '%s'",b);
        printf("\n-----------------------------------------------------------------");
    }
    return 0;
}