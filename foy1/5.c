#include <stdio.h>

/*
 *  is_3*2 yıl, is_1*1 yıl, is_2*2 yıl, is_4*5 yıl
 * sistem.h kütüphanesinde olduğu varsayılan fonksiyon.
 */

int uyku(int yil){
  printf("%d yil uyudu\n",yil);
  return 0;
}

int is_1(int n){
  return n;
}

int is_2(int n){
 return n; 
}

int is_3(int n){
  return n;
}

int is_4(int n){
  return n;
}

void main(void){
  
  uyku(is_3(1));
  uyku(is_1(2));
  uyku(is_2(2));
  uyku(is_4(5));

}


