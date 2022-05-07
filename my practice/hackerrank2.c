#include <stdio.h>

void update(int *a,int *b) {
    int temp ;
    int temp1;
    
     temp = *a ;

    *a= *a + *b ;  

  /*  if(temp<*b)
    {                         
         temp1=temp;            
         temp= *b;
         *b =temp1;
             } */
    *b= abs(temp - *b) ;     // if you use abs function its act as a modulus here i creted the modulus function 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    printf("enter 2 no \n");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}