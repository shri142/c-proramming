#include<stdio.h>
int main ()
{
float d , f  ;
int num ;
printf("**For degree to faranite **enter 1\n");
printf("**For faranite to degree **enter 2\n");
scanf("%d",&num);
printf("\n");

if(num==1)
{
printf("enter temp in degree\n");
scanf("%f",&d);
f=((d*9)/5)+32 ;
printf("temp in faranite is %.2f\n",f);
}
else
{
printf("enter temp in faranite\n");
scanf("%f",&f);
d=((f-32)*5)/9;  //if we do divide first then value gets wrong.
printf("temp in faranite is %.2f\n",d);
}
printf("thank you"); 

return 0;}
