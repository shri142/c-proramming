#include<stdio.h>
#include<conio.h>
int main ()
{  int p , r, r1=6 , r2=7 , n , select , intrest ;

  printf("principle amount you want to invest=\n");
  scanf("%d",&p);
  printf("no of year you want to invest=\n");
  scanf("%d",&n);
  printf("rate of intrest\n 1)simple rate=%d\n2)FD rate=%d\n",r1,r2);
  printf("select 1 or 2 \n");
  scanf("%d",&select);
if (select==1)
{
  printf("your rate is %d\n",r1);
  r=r1;
}
if(select==2)
{
  printf("your rate is %d\n",r2);
  r=r2;
}
else
{
  printf("sorry you pressed %d\n",select);
  goto end ;
}

 intrest =(p*n*r)/100 ;

printf("intrest you will get is =%d\n",intrest);
printf("thank you");
getch();
end:
return 0;
}
