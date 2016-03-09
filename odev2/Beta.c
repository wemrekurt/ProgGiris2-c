#include <stdio.h>

int main(void){
  
  int min=0,max=0,val = 1;  
  int first = 1;
  
  while(val != 0){
    printf ("Sayi giriniz: ");
    scanf ("%d",&val);
    
    if(first == 1){
      max = val;
      min = val;
      first = 0;
    }
    
    if(val > max && val != 0){
      max = val;
    }else if(val<min && val != 0){
      min = val;
    }  
  }

  printf("Girdiginiz en buyuk sayi: %d \n",max);
  printf("Girdiginiz en kucuk sayi: %d \n",min);
}
