// #include<stdio.h>

// int main(){

//    int n, i, j, l,m;
//    int value=65;  //ascii value of A is 65
//     printf("Enter no of line you want with this pattern\n");
//     scanf("%d", &n);

//      for (i = n; i > 0; i--)
//     {
//         for (j = i - 1; j > 0; j--)
//         {
//             printf(" ");
//         }
//         for (l = 0; l <= n - i; l++)
//         {
//             printf("%c",value);
//             value++;
//         }
//          value=value-2; 
//         for (m = 1; m <= n - i; m++)
//         {   
//             printf("%c",value);
//             value--;
//         }
        
//          value=65; 

//         printf("\n");
//     }




//     return 0;
// }


#include<stdio.h>

int main(){

    int n, i, j, l,m;
    int value=65;  //ascii value of A is 65
    printf("Enter no of line you want with this pattern\n");
    scanf("%d", &n);

 for (i = n; i > 0; i--)
    {   
        for (l = 1; l <= n - i; l++)
        {
            printf(" ");
            
        }


        for (j = i ; j > 0; j--)
        {
            printf("%c",value);
            value++;
        }
        
         value=value-2;
        for (m = i-1; m >0; m--)
        {   
            printf("%c",value);
            value--;
            
        }
        value=65;
        printf("\n");

    
    }

    return 0;
}