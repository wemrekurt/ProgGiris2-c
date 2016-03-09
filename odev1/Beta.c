#include <stdio.h>
#include <math.h>

int main(){
  
  int i =1,j;
  
  for(i;i<=10;i++){
    j=1;
    for(j;j<=10;j++){
      int islem = 0;
      islem = i*j;
      printf("%d\t",islem);
    }
    printf("\n");  
  }
  
}
