#include<stdio.h>
#include<stdlib.h>

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int multiple(int a,int b)
{
    return a*b;
}

int divide(int a,int b)
{
    return a/b;
}

int main()
{
    int choice;
    int a,b;
    while(1)
    {
        printf("\n 1. ADDITION");
        printf("\n 2. SUBTRACTION");
        printf("\n 3. MULTIPLICATION");
        printf("\n 4. DIVISION");
        printf("\n 5. EXIT");
        
        printf("\n");
        printf("\n Enter your choice = ");
        scanf("%d",&choice);
        printf("------------------------------------------");

        switch(choice)
        {
            case 1:
                printf("\n Enter the value of A = ");
                scanf("%d",&a);
                printf("\n Enter the value of B = ");
                scanf("%d",&b);

                add(a,b);
                printf("\n ------------------------------------------");
                printf("\n            ANSWER = %d",add(a,b));
                printf("\n ------------------------------------------");
                break;

            case 2:
                printf("\n Enter the value of A = ");
                scanf("%d",&a);
                printf("\n Enter the value of B = ");
                scanf("%d",&b);

                sub(a,b);
                printf("\n ------------------------------------------");
                printf("\n           ANSWER = %d",sub(a,b));
                printf("\n ------------------------------------------");
                break;
            
            case 3:
                printf("\n Enter the value of A = ");
                scanf("%d",&a);
                printf("\n Enter the value of B = ");
                scanf("%d",&b);

                multiple(a,b);
                printf("\n ------------------------------------------");
                printf("\n           ANSWER = %d",multiple(a,b));
                printf("\n ------------------------------------------");
                break;
            
            case 4:
                printf("\n Enter the value of A = ");
                scanf("%d",&a);
                printf("\n Enter the value of B = ");
                scanf("%d",&b);
                printf("\n ------------------------------------------");
                printf("\n           ANSWER = %d",divide(a,b));
                printf("\n ------------------------------------------");

                divide(a,b);
                break;

            case 5:
                exit(0);
    
            default :
                printf("\n !! Enter the valid choice !!");
        }
    }
    return 0;
}