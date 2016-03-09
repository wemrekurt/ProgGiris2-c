#include <stdio.h>
#include <math.h>

int main(void){
  int sor = 0, say1,say2,say3,girilen;
  printf("Deger girin: ");
  
  while(sor<3){
    girilen = 0;
    scanf("%d",&girilen);
    if(girilen == 0){
      break;
    }else{
      if(sor == 0){
        say1 = girilen;
      }else if (sor == 1){
        say2 = girilen;
      }else if(sor == 2){
        say3 = girilen;
      }
    }
    sor = sor + 1;
  }



int sonuc = 0;

if(sor == 3){
  int u = (say1+say2+say3)/2;
  sonuc = sqrt(u*(u-say1)*(u-say2)*(u-say3));
  printf("ucgen alani: %d \n",sonuc);
}else if(sor == 2){
  sonuc = say1 * say2;
  printf("dikdortgen alani: %d \n",sonuc);
}else if(sor == 1){
  sonuc = say1 * say1;
  printf("kare alani: %d \n",sonuc);
}else {
  printf("hata var\n");
}

return 0;
}
