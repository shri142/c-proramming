#include <stdio.h>

int main()
{
    int a;
    int i=0;
    do
    {  
        i=i+1;
          
        printf("Enter a positive number \n");
        scanf("%d", &a);
        if (a > 0)
        {
            printf("The number is %d\n ", a); 
            return 0;
        }
         if (a < 0 && i == 3)
        {
            printf("sorry");
            return 0;
        }


        printf("plz enter positive number\n ");

        

    } while (i < 3);
    
return 0;
}