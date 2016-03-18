#include <stdio.h>
#include <stdlib.h>

double rastgele_ondalikli(){
  /* [0 , 1) aralığında rastgele sayılar üret */
  double sayi = (double) rand();
  return sayi / (RAND_MAX + 1);
}

int geometrik_rastgele_deger (double p){
  double q;
  int n = 0;

  while(q >= p){
    q = rastgele_ondalikli();
    n++;
    printf("%d\n",n);
  }

  return n;

}

int main(void){
  int test =  geometrik_rastgele_deger(16.52);
  printf("Test: %f \n",test);
}
