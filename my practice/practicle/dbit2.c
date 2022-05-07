//write a simple program to devlope a simple calculator and display the result using switch statement

#include<stdio.h>

int main()     
 {   int a ,b ,select;

  printf("Enter first number :");         
   scanf("%d",&a);
  
  printf("Enter the second number:");
  scanf("%d",&b);
  
   printf("Enter 1 for addition\n");
   printf("Enter 2 for subtraction\n");
   printf("Enter 3 for multiplication\n");
   printf("Enter 4 for division\n");

  scanf("%d",&select);

  switch(select)
{
   case 1: printf("Addition of this two number is %d",a+b);
   break ;
   case 2: printf("subtraction of this two number is %d",a-b);
   break ;
   case 3: printf("multiplication of this two number is %d",a*b);
   break ;
   case 4:    if (b==0)
             {  printf("not defined");
                 return 0; }
              if(b>a && a!=0)
              { printf("Sorry this is simple calculator plz enter a greter than b ");
                 return 0; }
             printf("division of this two number is %d",a/b);
   break ;
   
   default: printf("please select from 1 to 4");
   break;
}
   return 0;   
   }           