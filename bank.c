#include<stdio.h>
#include<conio.h>
int main()
{
{
 float bal=20000.00;
 char ans;

 printf("your balance is=%.2f\n",bal);
printf("1)withdraw\n");
printf("2)deposit\n");
printf("3)cancel\n");
int n;
printf("your answer=\n");
scanf("%d",&n);
if(n==1)
{
    float p ,r ;
    printf("enter amount to withdraw=");
    scanf("%f",&p);
   r=bal-p;
   bal=r;
   if(bal<1000)
     { r=bal+p;
     printf("transitiom invalid ur balance is = %f\n",r);
       bal=r;
     }
   else 
       {   
           printf("now your balance is =%f\n",r);
           bal=r;
       }
}
 if (n==2)
  {   int q ;
      float r ;
       printf("enter amount to deposite=");
       scanf("%f",&q);
       r=bal+(float)q;
       printf("now your balance is =%f\n",r);
  }
else  
   {   printf("thank you\n");}

// printf("do you want to continue?\n");
// printf("enter 1 for and 2 for no\n");
// scanf("%d",%ans);
}

// while (ans==1);

getch();

return 0;

}
