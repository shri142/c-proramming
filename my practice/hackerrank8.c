#include<stdio.h>

int main()
{ int n;
   printf("enter a num\n");
   scanf("%d",&n);

  if (n%2==0 && 2<=n &&n<=5)
     { printf("not weird");}

  if(n%2==0 && 6<=n &&n<=20)
     {  printf("weird");}

  if(n%2==0 && n>20)
    {  printf("not weird");}

  if(n%2==1)
    { printf("weird");}
 return 0;
}
/* int main(){

int N; 

scanf("%d",&N);

if( N%2 == 1 || (N > 5 && N < 21))

    printf("Weird");

else

    printf("Not Weird");

return 0;
}

*/  