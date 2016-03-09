#include <stdio.h>
#include <math.h>

// Kulannıcıdan aldığı sayının basamakları toplamını bulan
//                          tek basamalarını bulan
//                          tek basamakların toplamını bulan
int main(){
  
  int sayi,toplam=0; 
  printf("sayi girin: "); 
  scanf("%d",&sayi);

  while( sayi != 0){
    toplam = toplam + sayi % 10;
    sayi = sayi/10;
  }
  
  printf("Toplam: %d ", toplam);

  return 0;
  
}
