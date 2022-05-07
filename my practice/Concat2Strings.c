#include <stdio.h>
#include <string.h>  
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int j;
    double b;
    char k[100];  
 printf("enter values\n");
    scanf("%d", &j);

   scanf("%f\n", &b); // here \n is used coz if i dont use then next input sor string with space 
                        //stops at 1st coz after %f there would be default \n so

      
  
    scanf("%[^\n]%*c", k);
 


    printf("%d\n", i+j);

   printf("%0.1lf\n",b+d);

 //  puts(strcat(s,k));  // if only write strcat(s,k); then overflow buffer occurs
    printf("%s%s",s,k);
    return 0;
}