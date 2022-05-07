/*#include <stdio.h>
int main()
{
char ch;
printf("Enter a character: ");
scanf("%c",&ch);
printf("\n");
if( (ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <='Z'))
printf("%c is an alphabet\n",ch);
else
printf("%c is not an alphabet\n",ch);

return 0;
}*/
//from ascii method
#include <stdio.h>

int main()
{
char ch;
printf("Enter any character: ");
scanf("%c", &ch);
if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
 
{
printf("%c is an alphabet\n",ch);
}
if ((ch>=49 && ch<=58))
{
  printf("charector is no.\n");
}
else
{
printf("%c is not an alphabet\n",ch);
}

return 0;
}


