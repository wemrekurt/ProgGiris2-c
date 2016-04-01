#include <stdio.h>
#include <stdlib.h>
double rastgele_ondalikli(){

 /* [0 , 1) aralığında rastgele sayılar üret */

  double sayi = (double) rand();
  double a = sayi / (RAND_MAX - 1);
  return a;

}

int geometrik_rastgele_deger (double p){

 double q = rastgele_ondalikli();

 int n = 0;
  while (q >= p){
    q = rastgele_ondalikli();
    n++;
  }
  
return n;

}

int main(){
printf("%d \n",geometrik_rastgele_deger(0.1));

}


