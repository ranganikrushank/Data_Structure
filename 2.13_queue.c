#include<stdio.h>
#include<stdlib.h>

int REAR=-1;
int FRONT=-1;
int queue[5];

int enqueue()
{
    int number;

    if(REAR>=4)
    {
        printf("\n--------------------------------------");
        printf("\n         QUEUE IS OVERFLOW");
        printf("\n--------------------------------------");
    }
    else
    {
        printf("\n Enter the new element = ");
        scanf("%d",&number);

        if(FRONT==-1 && REAR==-1)
        {
            FRONT=0;
        }

        REAR += 1;
        queue[REAR] = number;

    }

    return 0;
}

int dequeue()
{
    int delete;

    if(FRONT<=-1 && REAR<=-1)
    {
        printf("\n--------------------------------------");
        printf("\n      QUEUE IS ALREAY EMPTY");
        printf("\n--------------------------------------");
    }
    else
    {
       
        printf("\n---------------------------------------------------------------");
        printf("\n     THE NUMBER %d is DELETED FROM THE QUEUE",queue[FRONT]);
        printf("\n---------------------------------------------------------------");
        if(FRONT==REAR)
        {
            FRONT=-1;
            REAR=-1;
        }
        else
        {
            FRONT=FRONT+1;
        }
    }

    return 0;
}

int display()
{
    if(FRONT<=-1 && REAR<=-1)
    {
        printf("\n--------------------------------------");
        printf("\n      YOUR QUEUE IS EMPTY");
        printf("\n      SO ENTER THE ELEMENT");
        printf("\n--------------------------------------");
    }

    else
    {
        printf("\n_______________________________________________");
        printf("\n      YOUR FINAL QUEUE IS BELOW.....");
        printf("\n_______________________________________________");

        for(int i=FRONT;i<=REAR;i++)
        {
            printf("\n %d \t",queue[i]);
        }

        printf("\n");
    }

    return 0;
}

int main()
{
    int choice;

    while(1)
    {

    printf("\n___________________________________");
    printf("\n       CHOOSE FROM BELOW");
    printf("\n___________________________________");
    printf("\n 1. INSERT");
    printf("\n 2. DELETE");
    printf("\n 3. DISPLAY");
    printf("\n 4. EXIT");

    printf("\n Enter your choice = ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("\n !!ENTER VALID CHOICE!!");
    }

    }
    return 0;
}