#include <stdio.h>
#include <math.h>

int main(){

  int hacim,alan;
  int yaricap,yukseklik;
  
  printf("Lutfen silindirin yaricap(r) degerini giriniz: ");
  scanf("%d",&yaricap);
  
  printf("Lutfen silindirin yukseklik(h) degerini giriniz: ");
  scanf("%d",&yukseklik);
  
  int pi = 3;
  hacim = (pi*(yaricap*yaricap))*yukseklik;
  alan  = 2*(pi*yaricap*yukseklik);
  
  printf("\n\n Silindirin Alani %d ve Hacmi %d'dir",alan,hacim); 
}
