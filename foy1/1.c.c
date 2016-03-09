#include <stdio.h>

int main(){
  int altsinir = 0;
  int ustsinir = 0;
  
  printf("Alt siniri giriniz: ");
  scanf("%d",&altsinir);

  printf ("Ust siniri giriniz: ");
  scanf("%d",&ustsinir);

  for(altsinir;altsinir<=ustsinir;altsinir++){
    printf("%d ",altsinir);
  }
  
  printf("\n\n Bu kadar!\n");
  return 0;
}
