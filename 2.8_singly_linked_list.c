#include<stdio.h>
#include<stdlib.h>
struct link
{
    int n;
    struct link *p;
};

struct link *start = NULL;

void pushbeg();
void pushend();
void pushsp();
void popbeg();
void popend();
void popsp();
void disp();



void main()
{
    int n;
    do
    {
        printf("\n 1.PUSH BEGINNING");
        printf("\n 2.PUSH ENDING");
        printf("\n 3.PUSH SPECIAL");
        printf("\n 4.POP BEGINNING");
        printf("\n 5.POP ENDING");
        printf("\n 6.POP SPECIAL");
        printf("\n 7.DISPLAY");
        printf("\n 8.EXIT");

        printf("\n-----------------------------------------------");
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
                pushsp();
                break;
            case 4: 
                popbeg();
                break;
            case 5: 
                popend();
                break;
            case 6: 
                popsp();
                break;
            case 7: 
                disp();
                break;
            case 8: 
                printf("\nTHANK YOU\n");
                break;
            default : 
                printf("!!  ENTER VALID CHOICE !!");
                break;
        }
    }
    while(n!=10);
}



void pushbeg()
{
    struct link *node;
    int x;

    node=(struct link *)malloc(sizeof(struct link));

    printf("\n Enter the number you want to insert = ");
    scanf("%d",&x);

    node->n=x;
    node->p=NULL;

    if(start == NULL)
    {
        start = node;
    }
    else
    {
        node ->p = start;
        start = node;
    }
}



void pushend()
{
    struct link *node,*t;
    int x;

    node=(struct link *)malloc(sizeof(struct link));

    printf("\n Enter the number you want to insert = ");
    scanf("%d",&x);

    node->n=x;
    node->p=NULL;

    if(start == NULL)
    {
        start = node;
    }
    else
    {
        t = start;
        while(t -> p != NULL)
        {
            t = t -> p;
        }
        t -> p = node;
    }
}




void pushsp()
{
    struct link *node,*t;
    int x,pos,i=1;

    node=(struct link *)malloc(sizeof(struct link));

    disp();

    printf("\n Enter the number u want to insert = ");
    scanf("%d",&x);

    node->n=x;
    node->p=NULL;

    if(start == NULL)
    {
        start = node;
    }
    else
    {
        printf("\n Enter the position = ");
        scanf("%d",&pos);
        if(pos==1)
        {
            pushbeg();
        }
        else
        {

        t = start;
        while(i+1!=pos)
        {
            t = t -> p;
            if(t == NULL)
            {
                printf("\n POSITION OUT OF THE SIZE");
                printf("\n ENTER VALID POSITION");
                return;
            }
            i++;
        }
        node -> p = t -> p;
        t -> p = node;
        }
    }
}




void popbeg()
{
    struct link *t;
    if(start == NULL)
    {
        printf("\n-----------------------------------------------");
        printf("\n          SINGLY LINKED LIST IS EMPTY");
        printf("\n-----------------------------------------------");
    }
    else
    {
        disp();

        t = start;
        printf("\n-----------------------------------------------");
        printf("\n       %d is deleted from the list",start -> n);
        printf("\n-----------------------------------------------");
        start = start -> p;
        free(t);
    }
}




void popend()
{
    struct link *t;
    if(start == NULL)
    {
        printf("\n-----------------------------------------------");
        printf("\n          SINGLY LINKED LIST IS EMPTY");
        printf("\n-----------------------------------------------");
    }
    else
    {
        disp();

        t = start;
        while(t -> p -> p != NULL)
        {
            t = t -> p;
        }
        printf("\n-----------------------------------------------");
        printf("\n         %d is deleted from the list",t -> p -> n);
        printf("\n-----------------------------------------------");
        free(t -> p);
        t -> p = NULL;
    }
}




void popsp()
{
    struct link *t,*q;
    int pos,i=1;

    if(start == NULL)
    {
        printf("\n-----------------------------------------------");
        printf("\n          SINGLY LINKED LIST IS EMPTY");
        printf("\n-----------------------------------------------");
    }
    else
    {
        printf("\n Enter the position of the elment you want to delete = ");
        scanf("%d",&pos);

        t = start;

        if(pos == 1)
        {
            popbeg();
        }
        else
        {
            disp();

            while(i+1 != pos)
            {
                t = t -> p;
                if(t == NULL)
                {
                    printf("\n-----------------------------------------------");
                    printf("\n            POSITION NOT FOUND");
                    printf("\n-----------------------------------------------");
                    return;
                }
                i++;
            }
            q = t -> p;
            printf("\n-----------------------------------------------");
            printf("\n         %d is deleted from the list",q -> n);
            printf("\n-----------------------------------------------");
            t -> p = q -> p;
            free(q);
        }
    }
}




void disp()
{
    struct link *t;
    if(start == NULL)
    {
        printf("\n-----------------------------------------------");
        printf("\n         SINGLY LINKED LIST IS EMPTY");
        printf("\n-----------------------------------------------");
    }
    else
    {
        t = start;
        while(t != NULL)
        {
            printf("%d\t",t -> n);
            t = t -> p;
        }
    }
}