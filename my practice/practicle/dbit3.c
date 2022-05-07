//write a c program to read the mark of the student and disply grade
#include <stdio.h>
int main()
{   int marks;

    printf("enter your percentage\n");
    scanf("%d", &marks);

    if(marks<0 || marks>100)
  {
      printf("Enter valid marks");
      return 0;
  }
      marks=marks/10;
      switch (marks)
      {
      case 0 : 
      printf("F");           break;

      case 1 : 
      printf("F");           break;

      case 2 : 
      printf("F");           break;

      case 3 : 
      printf("F");           break;
       
      case 4 : 
      printf("D");           break;

      case 5 : 
      printf("C");           break;

      case 6 : 
      printf("B");           break;      

      case 7 : 
      printf("A");           break;

      case 8 : 
      printf("A");           break;

      case 9 : 
      printf("O");           break;

      case 10 : 
      printf("O");           break;

      } 
 return 0;
}
