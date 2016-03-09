#include <stdio.h>
#include <math.h>

int main (void){
  
  int a,b,c,delta;
  double kokdelta,kok1,kok2;

  // a,b,c değerlerinin kulanıcıdan alınması
  printf ("a degerini girin: ");
  scanf ("%d",&a);

  printf("b degerini girin: ");
  scanf("%d",&b);

  printf("c degerini girin: ");
  scanf("%d",&c);
  
  // delta = b^2-4ac
  delta = pow(b,2)-(4*a*c);
  kokdelta = sqrt(delta);
  
  kok1 = (-b-kokdelta)/(2*a);
  kok2 = (-b+kokdelta)/(2*a);
  
  if(delta>0){
    printf ("Kok 1: %f \n",kok1);
    printf ("Kok 2: %f \n",kok2);
  }else{
    printf ("Kok 1: (-%d -√%d) / 2%d \n",b,delta,a);
    printf ("Kok 2: (-%d +√%d) / 2%d \n",b,delta,a);
  }
  
  return 0;
}
