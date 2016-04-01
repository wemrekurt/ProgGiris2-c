#include <stdio.h>

int main(void){
  int c,upc=0,dwc=0,num=0,oth=0;

  for(c=getchar(); c != EOF; c=getchar()){
    if(c > 64 && c < 91)
      upc++;
    else if(c > 96 && c < 123)
      dwc++;
    else if(c > 47 && c < 58){
      putchar(c);
      num++;
    }
    else{
      if( c != '\n')
        oth++;
      putchar(c);
    }
  }

  printf("Toplam Buyuk: %d , Kucuk: %d , Sayi: %d , Diger: %d \n",upc,dwc,num,oth);

  return 0;
}

//gist: 0a278a80b7515068e0d7
