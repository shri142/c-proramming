// A 057 SHRIKRISHNA LAXMAN UMBARE
// C program to read two numbers and print the sum , diffrence , product and quotient of two numbers
#include<stdio.h>
int main()
{ 
    int A,B  ;
    
     printf("type 1st no.\n");   
     scanf("%d",&A);              //input of 1st number
     printf("type 2nd no.\n");    
     scanf("%d",&B);               // input o 2nd number

     //calculation
     
     printf("Addition is %d\n",A+B);
     printf("Subtraction is %d\n",A-B);
     printf("Multiplication is %d\n",A*B);
     printf("Quoient is %d\n",A%B);    //it will show random value if no 1 is smaller than no 2
    return 0;
}
