
#include <stdio.h>
#include <ctype.h>
#define SIZE 100   //stack size

char s[SIZE];

int top = -1; //global variables
void push(char elem) 
{ 
//PUSH operation 
s[++top] = elem;
}

char pop() 
{ 
// POP operation 
return (s[top--]);
}

int pr(char elem) 
{ 
//For precedence 

switch (elem)

 {
case '#':

return 0;

case '(':

return 1;

case '+':
case '-':

return 2;

case '*':
case '/':

return 3;
}

}
int main() 
{



char infx[50], pofx[50], ch, elem;

int i = 0, k = 0;

printf("\nEnter the Infix Expression:  ");

scanf("%s",infx);//input
printf("*********************************");

push('#');

while ((ch = infx[i++]) != '\0')
 {

if (ch == '(')
push(ch);

else if (isalnum(ch))
pofx[k++] = ch;

else if (ch == ')') 
{
while (s[top] != '(')
pofx[k++] = pop();
elem = pop(); //To remove '('' 
} 

else 
{
 // for Operator 
while (pr(s[top]) >= pr(ch))
pofx[k++] = pop();

push(ch);
}

}

while (s[top] != '#')  

pofx[k++] = pop();
pofx[k] = '\0'; 
printf("\n\nGiven Infix Expn: %s  \nPostfix Expn: %s\n", infx, pofx);
return 0;
}
