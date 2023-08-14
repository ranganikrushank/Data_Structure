#include <stdio.h>
#include <stdlib.h>

int top=-1;

int push(int *stack,int size)
{
  int integer;
  
  printf("\n ----PUSH SELECTED BY YOU---- \n");
  
  if(top+1>=size)
  {
    printf("\n-------------------------------------");
    printf("\n ERROR :- STACK OVERFLOW");
    printf("\n-------------------------------------");
  }
    
  else
  {
    top++;
    
    printf("\n Enter the number u want to push = ");
    scanf("%d",&integer);
    
    *(stack+top)=integer;

    printf("\n-----------------------------------");
    printf("\n %d PUSHED IN STACK..... \n",integer);
    printf("-------------------------------------");
  }
  
  return 0;
}
int pop(int *stack)
{
  printf("\n ----POP SELECTED BY YOU---- \n");

  if(top<0)
  {

    printf("\n-----------------------------------");
    printf("\n STACK OVERFLOW");
    printf("\n-----------------------------------");
  
  }
  else
  {

    printf("\n_________________________________________________");
    printf("\n %d POPPED FROM THE STACK",*(stack+top));
    printf("\n_________________________________________________");

    top--;
  }

  return 0;
}
int peep(int *stack)
{

  printf("\n ----POP SELECTED BY YOU---- \n");

  if(top<0)
  {
    printf("\n-----------------------------------");
    printf("\n STACK IS EMPTY");
    printf("\n-----------------------------------");
  }

  else
  {

    printf("\n-----------------------------------");    
    printf("\n %d is on the TOP OF THE STACK",*(stack+top));
    printf("\n-----------------------------------");
  
  } 

  return 0;
}
int display(int *stack)
{

  if(top<0)
  {

    printf("\n-----------------------------------");
    printf("\n YOUR STACK IS EMPTY");
    printf("\n-----------------------------------");

  }
  else
  {

    for(int i=0;i<=top;i++)
    {
      printf("%d\t",*(stack+i));
    }
  }

  return 0;
}

int main()
{
  int size;
  int choice;
  
  printf("\n Enter the size of the stack =  ");
  scanf("%d",&size);

  printf("\n  The stack of %d is created ",size);
  
  if (size<1)
  {
    printf("\n\n SIZE IS NOT VALID !!");
    main();
  }
  
  int stack[size];

  while(1)
{
  printf("\n\n SELECT FROM THE BELOW LIST");
  printf("\n 1. PUSH");
  printf("\n 2. POP");
  printf("\n 3. PEEP");
  printf("\n 4. DISPLAY");
  printf("\n 5. EXIT ");

  printf("\n\n ENTER YOUR CHOICE = ");
  scanf("%d",&choice);

    switch(choice)
      {
        case 1:
          push(stack,size);
          break;

        case 2:
          pop(stack);
          break;

        case 3:
          peep(stack);
          break;

        case 4:
          display(stack);
          break;

        case 5:
          exit(0);
          break;

        default:
          printf("\n ENTER VALID CHOICE!!");  
      }
}  
  return 0;
}