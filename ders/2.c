#include <stdio.h>
#include <math.h>

// Kulannıcıdan aldığı sayının basamakları toplamını bulan
//                          tek basamalarını bulan
//                          tek basamakların toplamını bulan
int main(){
  
  int sayi,basamak=0,toplam = 0; 
  printf("sayi girin: "); 
  scanf("%d",&sayi);

  while( sayi != 0){
    basamak =  sayi % 10;
    
    if(basamak % 2 == 1){
      toplam = toplam + 1;
    }    
    
    sayi = sayi/10;
  }
  
  printf("Toplam: %d ", toplam);

  return 0;
  
}
