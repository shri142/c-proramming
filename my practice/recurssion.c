#include <stdio.h>

int fib(int n){
 

//code ka calculation

if (n==1)
{
    return 0;
}
else if(n==2){
    return 1;
}
else{                               
      return fib(n-1)+fib(n-2);
}

}

int main(){

int number, value;
scanf("%d",&number);


value=fib(number);

printf(" value is %d",value);

return 0;
}