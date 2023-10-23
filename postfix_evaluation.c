#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
#include<stdlib.h>


float stack[20];
int top = -1;


int disp()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%f\n",stack[i]);
	}

    return 0;
}


int push(float ch)
{
	stack[++top] = ch;

    return 0;
}


float pop()
{
	if(top==-1)
	{
		printf("Enter postfix expression...");
		exit(0);
	}
	return stack[top--];
}


int eval(char input[30])
{
	int i=0;
	float p1,p2;
	int n1;

	while(input[i]!='\0')
	{
		n1 = isdigit(input[i]);

		if(n1!=0)
		{
			push(input[i]-48);
		}
		else
		{
			p1 = pop();
			p2 = pop();

			if(input[i]=='+')
				push(p2 + p1);
			else if(input[i]=='-')
				push(p2 - p1);
			else if(input[i]=='*')
				push(p2 * p1);
			else if(input[i]=='/')
				push(p2 / p1);
		}
		i++;
	}
    printf("\n-----------------------------------------------------------------------------------------");
	printf("\n Answer = %0.2f",stack[top]);
    printf("\n-----------------------------------------------------------------------------------------");

    return 0;
}

int main()
{
	char input[30];

	printf("Enter input string : ");
	scanf("%s",&input);

	eval(input);

    return 0;
}