#include<stdio.h>
#include<stdlib.h>

int top=-1;

int push(int *stack,int size)
{
    if(top>=size)
    {
        printf("\n-------------------------------------------");
        printf("\n             STACK OVERFLOW");
        printf("\n-------------------------------------------");
    }
    else
    {
        int no;

        top++;
        printf("\n Enter the number you want to add in the stack = ");
        scanf("%d",&no);

        *(stack+top)=no;

        printf("\n-------------------------------------------");
        printf("\n      %d is added into the stack",no);
        printf("\n-------------------------------------------");
    }
    return 0;
}


int pop(int *stack,int size)
{
    if(top==-1)
    {
        printf("\n------------------------------------");
        printf("\n         STACK UNDERFLOW");
        printf("\n------------------------------------");
    }
    else
    {
        printf("\n-----------------------------------------------------------");
        printf("\n         %d is removed from the stack",*(stack+top));
        printf("\n-----------------------------------------------------------");

        top--;
    }
    return 0;
}


int peep(int *stack)
{
    if(top==-1)
    {
        printf("\n-----------------------------------------------------------");
        printf("\n                   STACK UNDERFLOW");
        printf("\n-----------------------------------------------------------");
    }
    else
    {
        printf("\n-----------------------------------------------------------");
        printf("\n        %d is on the top of the stack",*(stack+top));
        printf("\n-----------------------------------------------------------");
    }
    return 0;
}


int display(int *stack,int size)
{
    if(top==-1)
    {
        printf("\n-----------------------------------------------------------");
        printf("\n                   STACK UNDERFLOW");
        printf("\n-----------------------------------------------------------");
    }
    else
    {
        printf("\n-----------------------------------------------------------");
        printf("\n                   STACK ELEMENTS");
        printf("\n-----------------------------------------------------------");
        for(int i=0;i<size;i++)
        {
            printf("%d  ",*(stack+top));
        }
    }
    return 0;
}


int change(int *stack,int size)
{
    int i,j,x;

    if(top==-1)
    {
        printf("\n Underflow");
    }
    else
    {
        printf("enter the position to be changed = ");
        scanf("%d",&j);
        printf("Enter the new number =");
        scanf("%d",&x);
        stack[j]=x;
        display(stack,size);
    }
    return 0;
}



int main()
{
    int choice;
    int size;

    printf("\n Enter the size of the stack = ");
    scanf("%d",&size);

    int stack[size];

    while(1)
    {
        printf("\n 1. PUSH");
        printf("\n 2. POP");
        printf("\n 3. PEEP");
        printf("\n 4. DISPLAY");
        printf("\n 5. CHANGE");
        printf("\n 6. EXIT");
        printf("\n");
        printf("\n Enter your choice = ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            push(stack,size);
            break;

            case 2:
            pop(stack,size);
            break;

            case 3:
            peep(stack);
            break;

            case 4:
            display(stack,size);
            break;

            case 5:
            change(stack,size);
            break;

            case 6:
            exit(0);
            break;

            default:
            printf("\n !! ENTER VALID CHOICE !! ");
            break;
        }
    }
    return 0;
}