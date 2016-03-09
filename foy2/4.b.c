#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int alt_sinir, ust_sinir, toplan, i;
  alt_sinir = atoi(argv[1]);
  ust_sinir = atoi(argv[2]);
  printf("%d ile %d arasindaki sayilarin toplami : ", alt_sinir, ust_sinir);
  int toplam = 0;
  
  for(i=alt_sinir; i<=ust_sinir; i++){
    toplam = toplam + i;
  }
  
  printf("%d", toplam);
  return 0;
}
