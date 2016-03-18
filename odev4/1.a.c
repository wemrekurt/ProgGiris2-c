#include <stdio.h>

int faktoriyel(int n){
  int i,carpim = 1;
  i=2;
  while(i<=n){
    carpim *= i;
    i++;
  }
  return carpim;
}

int main (void){
  int test;
  test = faktoriyel(5);
  printf("5 Fakt. %d \n",test);
}
