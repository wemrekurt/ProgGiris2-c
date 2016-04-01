#include <stdio.h>
/*
  n = satir sayisi
  k = terim sayisi
  C(n,k) = komb(n k) = n! / k! * (n - k)!
*/
long fakt(int n){
  int x;
  long result = 1;
  for(x=1; x<=n; x++){
    result = result * x;
  }

  return result;
}


int main(void){
  
  int m,n,k;

  printf("Islem sayisi girin: ");
  scanf("%d",&m);
  
  for (n=0; n<m; n++){
  
    for(k=0; k<(m-n-1); k++)
      printf(" ");
    
    for(k=0; k<=n; k++)
      printf("%ld ",fakt(n) / (fakt(k)*fakt(n-k)));    
   
    printf("\n"); 
  }

  return 0;
}

// gist: cd6e2109acdf6d5e97d3
