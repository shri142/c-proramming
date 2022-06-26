#include<stdio.h>

int main(){

   int RollNo [50];
 
 
 int a,b;
   

   for (int k = 0; k < 50; k=k+1)
   {
     RollNo[k]=k+1;
   }

   


   for (int j = 0; j < 50; j=j+1)
   {
      printf("%d\n",&RollNo[j]);
   
   }

 
   
   


    return 0;
}