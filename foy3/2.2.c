#include <stdio.h>

int main(void){
  int  a = 1453;  
  int * x = &a;
  int  b = 1789;
  

  printf("*a degeri: %u\n", *x);
  printf("*b degeri: %d\n", b);
}
