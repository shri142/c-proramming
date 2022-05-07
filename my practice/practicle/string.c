#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int T;
char in[10000];
scanf("%d",&T);
for(int j=0;j<T;j++)
{
    int i=0,k=0;
    scanf("%s",in);
    while(in[i]!='\0'){
        if(i%2==0){
            printf("%c",in[i]);
        }
        i++;
    }
    printf(" ");
     while(in[k]!='\0'){
        if(k%2==1){
            printf("%c",in[k]);
        }
        k++;
    }
    printf("\n");
}
return 0;
}

