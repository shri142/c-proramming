#include<stdio.h>
int main()
{
   	int n,a,b,c,d,p,q;
   	
   	printf("enter 3 digit no\n");
   	scanf("%d",&n);
    	a=n%10;
   	    b=n/10;
     	p=b%10;
    	c=b/10;
   	    q=c%10;
    printf("the 3 nos after seperating are %d",q);
    printf(" %d",p);
	printf(" %d",a);
	
    return 0;}