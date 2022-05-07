//A 057  SHRIKRISHNA LAXMAN UMBARE
// Write a 'C' program to find the simple intrest for the amount (P),Rate of intrest (R) and no. of years (N)
#include<stdio.h>

int main()
{   int P,N ;
    float R,SI;
    R=6.2 ;  //rate is fixed for bank its not diff.
    printf("Enter the amount : ");    
    scanf("%d",&P);                       //input
    printf("\nEnter no of years :");
    scanf("%d",&N);
    //calculation
    SI=(P*R*N)/100;
    printf("\nSimple intrest is:%0.2f",SI); //output
    printf("\n \nThank You");
    return 0;
}