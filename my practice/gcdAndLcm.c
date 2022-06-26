 #include <stdio.h>

int main(void) {

  int T,N,gcd,lcm,count;

  scanf("%d",&T);
  
  for(int i=0;i<T;i++){
      
      count=0;
     
     scanf("%d",&N);
     
     
     for(int j=0;j<N;j++){
         
         for(int k=0;k<N;k++){
             
             //finding gcd between 2 numbers
             
             
             for(int l=1; l <= j && l <= k; ++l){
    
              
              if(j%l==0 && k%l==0)
              gcd = l;
            
                      
            
              
              //finding lcm between 2 numbers using gcd
              
              lcm = (j * k) / gcd;
              
              
              if((j*j)+(k*k)+(gcd*gcd)+(lcm*lcm)==N){
                  
                  count++;
                }
              
              
              
              
             }
             
             
         }
         
     }
     printf("%d\n",count);
  
  }


	return 0;
}
