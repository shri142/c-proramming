#include<stdio.h>

int main()   

 {  long long int b , p ,temp;
    
      printf("Enter base:\n");        
     scanf("%d",&b);

     printf("Enter power:\n");
     scanf("%lld",&p);
  
         if (b!=0 && p==0)
         {
             printf("1");
            return 0;
         }
        if (b==0 && p==0)
        {
            printf("infinity");
            return 0;
        }
        


        temp=b;    
     for (int i = 1; i < p; i++)
     {
        b=b*temp;     
     }

      printf("%d",b);

   return 0;   
   }           