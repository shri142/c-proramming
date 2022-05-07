#include <stdio.h>
int stack[100] = {0}, n, i, top = 0, max;

void push()
{

	if (top == max)
	{
		printf("Stack Overflow!\n\n");
	}
	else
	{
		printf("Enter an element to be pushed: ");
		scanf("%d", &n);
		stack[top] = n;
		top++;
	}
}
void pop()
{
	if (top == 0)
	{
		printf("Stack Underflow!\n\n");
	}
	else
	{
		stack[top] = stack[top - 1];
		printf("The Popped element is: %d\n\n", stack[top]);
		top--;
	}
}
void display()
{
	if (top >= 0)
	{
		printf("The Elements of the Stack are:\n\n");

		for (i = top - 1; i >= 0; i--)
		{
			printf("%d\n", stack[i]);
		}
	}
	else
	{
		printf("\nStack empty");
	}
}
void peek()
{
	if (top == max - 1)
	{
		printf("The top element is: %d", stack[top]);
	}
	else
		printf("The element is: %d\n", stack[top - 1]);
}

int main()
{
	int input;
	printf("Enter size of the stack(max 100): ");
	scanf("%d", &max);
	printf("Enter a no. according to the operation you want to perform");
	printf("\n1.push\n2.pop\n3.display\n4.peek\n5.exit\n\n");

	do
	{
		printf("Input: ");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			peek();
			break;
		case 5:
			printf("EXIT");
			break;

		default:
			printf("Enter a valid input");
		}

	} while (input != 5);
	return 0;
}
