#include<stdio.h>
#include<stdlib.h>

struct dlink
{
    int x;
    struct dlink *lp;
    struct dlink *rp;
};
struct dlink *start = NULL;

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
    struct dlink *node;
    int a;

    node=(struct dlink *)malloc(sizeof(struct dlink));

    printf("\n Enter the number you want to insert = ");
    scanf("%d",&a);

    node->x=a;
    node->lp=NULL;
    node->rp=NULL;

    if(start == NULL)
    {
        start = node;
    }
    else
    {
        node ->rp = start;
        start ->lp = node;
        start = node;
    }
}




void pushend()
{
    struct dlink *node,*t;
    int a;

    node=(struct dlink *)malloc(sizeof(struct dlink));

    printf("\n Enter the number u want to insert = ");
    scanf("%d",&a);

    node->x=a;
    node->lp=NULL;
    node->rp=NULL;

    if(start == NULL)
    {
        start = node;
    }
    else
    {
        t = start;
        while(t -> rp != NULL)
        {
            t = t->rp;
        }
        t ->rp = node;
        node ->lp = t;
    }
}




void popbeg()
{
    if(start == NULL)
    {
        printf("\n---------------------------------------------------");
        printf("\n         DOUBLY LINKED LIST IS EMPTY ");
        printf("\n---------------------------------------------------");
    }
    else
    {
        printf("\n---------------------------------------------------");
        printf("\n           %d is deleted ",start -> x);
        printf("\n---------------------------------------------------");
        start = start -> rp;
        free(start -> lp);
        start -> lp = NULL;
    }
}



void popend()
{
    struct dlink *t;
    if(start == NULL)
    {
        printf("\n---------------------------------------------------");
        printf("\n         DOUBLY LINKED LIST IS EMPTY ");
        printf("\n---------------------------------------------------");
    }
    else
    {
        t = start;
        while(t -> rp != NULL)
        {
            t = t -> rp;
        }
        printf("\n---------------------------------------------------");
        printf("\n             %d is deleted ",t -> x);
        printf("\n---------------------------------------------------");

        if(t->lp==NULL)
        {
            free(t);
            start=NULL;
        }
        else
        {
            t = t -> lp;
            free(t -> rp);
            t -> rp = NULL;
        }
    }
}



void disp()
{
    struct dlink *t;
    if(start == NULL)
    {
        printf("\n---------------------------------------------------");
        printf("\n         DOUBLY LINKED LIST IS EMPTY ");
        printf("\n---------------------------------------------------");
    }
    else
    {
        t = start;
        while(t != NULL)
        {
            printf("%d\t",t -> x);
            t = t -> rp;
        }
    }
}