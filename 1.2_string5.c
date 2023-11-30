// C program to find the substring of the string



#include <stdio.h>
#include<string.h>

int main()
{
    char str1[80], str2[80];
    int l, i, j;

    printf("\n Enter first word = ");
    scanf("%s",str1);

    printf("\n Enter second word = ");
    scanf("%s",str2);

    for (l = 0; str2[l] != '\0'; l++);
    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] == str2[j])
        {
            j++;
        }
        else
        {
            j = 0;
        }
    }

    if (j == l)
    {
        printf("\n-------------------------------------------------------");
        printf("\n       Substring found at position %d", i - j + 1);
        printf("\n-------------------------------------------------------");
    }
    else
    {
        printf("\n-------------------------------------");
        printf("\n       Substring not found");
        printf("\n-------------------------------------");
    }

    return 0;
}