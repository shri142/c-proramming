#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a,b,c,d,e,p,q,r,s,n;
    scanf("%d", &n);
    
    a=n%10;
    p=n/10;
    b=p%10;
    q=p/10;
    c=q%10;
    r=q/10;
    d=r%10;
    s=r/10;
    e=s%10;

  printf("%d",a+b+c+d+e);

    return 0;
}