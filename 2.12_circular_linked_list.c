#include<stdio.h>
#include<stdlib.h>

struct clink
{
    int x;
    struct clink *p;
};
struct clink *start = NULL;

void pushbeg();
void pushend();
void popbeg();
void popend();
void disp();

void main()
{
    int n;

    do
    {
        printf("\n 1.PUSH BEGINNING");
        printf("\n 2.PUSH ENDING");
        printf("\n 3.POP BEGINNING");
        printf("\n 4.POP ENDING");
        printf("\n 5.DISPLAY");
        printf("\n 6.EXIT");
        
        printf("\n");
        printf("\n Enter your choice = ");
        scanf("%d",&n);
        switch(n)
        {
            case 1: 
                pushbeg();
                break;

            case 2: 
                pushend();
                break;

            case 3: 
                popbeg();
                break;

            case 4: 
                popend();
                break;

            case 5: 
                disp();
                break;

            case 6: 
                printf("\nTHANK YOU\n");
                break;
            
            default : 
                printf("!!  ENTER VALID CHOICE !!");
                break;
        }
    }
    while(n!=8);
}




void pushbeg()
{
    struct clink *node,*t;
    int a;

    node=(struct clink *)malloc(sizeof(struct clink));

    printf("\n Enter the number you want to insert = ");
    scanf("%d",&a);

    node->x=a;
    node->p=NULL;

    if(start == NULL)
    {
        start = node;
        start -> p = start;
    }
    else
    {
        t = start;
        while(t -> p != start)
        {
            t = t -> p;
        }
        t -> p = node;
        node -> p = start;
        start = node;
    }
}



void pushend()
{
    struct clink *node,*t;
    int a;

    node=(struct clink *)malloc(sizeof(struct clink));

    printf("\n Enter the number you want to insert = ");
    scanf("%d",&a);

    node->x=a;
    node->p=NULL;

    if(start == NULL)
    {
        start = node;
        start -> p = start;
    }
    else
    {
        t = start;
        while(t -> p != start)
        {
            t = t -> p;
        }
        t -> p = node;
        node -> p = start;
    }
}




void popbeg()
{
    struct clink *t,*q;
    if(start == NULL)
    {
        printf("\n-------------------------------------------------");
        printf("\n         CIRCULAR LINKED LIST IS EMPTY");
        printf("\n-------------------------------------------------");
    }
    else
    {
        disp();

        q = start;
        printf("\n-------------------------------------------------");
        printf("\n           %d is deleted ",start -> x);
        printf("\n-------------------------------------------------");
        free(q);
        if(start == start -> p)
        {
            start = NULL;
        }
        else
        {
            t = start;
            while(t -> p != start)
            {
                t = t -> p;
            }
            start = start -> p;
            t -> p = start;
        }
    }
}





void popend()
{
    struct clink *t;
    if(start == NULL)
    {
        printf("\n-------------------------------------------------");
        printf("\n         CIRCULAR LINKED LIST IS EMPTY");
        printf("\n-------------------------------------------------");
    }
    else
    {
        disp();

        t = start;
        while(t -> p -> p != start)
        {
            t = t -> p;
        }
        printf("\n-------------------------------------------------");
        printf("\n           %d is deleted ",t -> p -> x);
        printf("\n-------------------------------------------------");
        if(start == t -> p)
        {
            start = NULL;
            return;
        }
        free(t -> p);
        t -> p = start;
    }
}






void disp()
{
    struct clink *t;
    if(start == NULL)
    {
        printf("\n-------------------------------------------------");
        printf("\n         CIRCULAR LINKED LIST IS EMPTY");
        printf("\n-------------------------------------------------");
    }
    else
    {
        t = start;
        printf("%d\t",t -> x);
        printf("\n");
        printf("\n");
        while(t -> p != start)
        {
            t = t -> p;
            printf("%d\t",t -> x);
        }
        printf("\n");
        printf("\n");
    }
}