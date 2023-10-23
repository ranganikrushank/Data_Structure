#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>


char stack[20];
int top=-1;

int dispStack()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%c",stack[i]);
	}
	printf("\t");

    return 0;
}


int priority(char ch)
{
	if(ch == '*' || ch=='/' || ch=='%')
	{
		return 3;
	}
	else if(ch =='+' || ch=='-')
	{
		return 2;
	}
	else
	{
		return 1;
	}
}


int push(char m)
{
	top++;
	stack[top] = m;

    return 0;
}


char pop()
{
	char m;
	m = stack[top];
	top--;
	return m;
}


int convert(char input[30])
{
	char output[30];
	int n1,n2,p1,p2;
	int i=0,j=0,k;
	char ch;

	printf("\n input");
	printf("\t");
	printf("Stack");
	printf("\t");
	printf("Output");
	printf("\n");

	while(input[i] != '\0')
	{
		n1 = isdigit(input[i]);
		n2 = isalpha(input[i]);

		if(n1!=0 || n2!=0)
		{
			output[j] = input[i];
			j++;
		}
		else if(top==-1)
		{
			push(input[i]);
		}
		else
		{
			p2 = priority(input[i]);
			begin:
			p1 = priority(stack[top]);


			if(p2>=p1)
			{
				push(input[i]);
			}
			else
			{
				ch = pop();
				output[j] = ch;
				j++;
				if(top!=-1)
					goto begin;
				else
					push(input[i]);
			}
		}

		printf("%c\t",input[i]);
		dispStack();

		for(k=0;k<j;k++)
		{
			printf("%c",output[k]);
		}
		printf("\n");
		getch();

		i++;

	}
	while(top!=-1)
	{
		ch = pop();
		output[j] = ch;
		j++;
	}
	output[j] = '\0';
	strrev(output);
    printf("_________________________________________________________________________________________");
	printf("\n PostFix : %s",output);
    printf("\n_________________________________________________________________________________________");

    return 0;
}


int main()
{
	char expression[30];

    printf("----------------------------------------------------------------------------------------");
	printf("\n Enter expression : ");
	scanf("%s",&expression);
    printf("----------------------------------------------------------------------------------------");

	strrev(expression);
	convert(expression);

    return 0;
}