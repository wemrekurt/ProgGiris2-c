
#include <stdio.h>
#include <string.h>
#define LEN 20
int anagram_kontrol(char first[LEN], char second[LEN]){
  int posOne=0,posTwo,found=0,ok=1;
  
  while(posOne<strlen(first) && ok==1){
    posTwo=0,found=0;
    while(posTwo<strlen(second) && found == 0){
      if (first[posOne] == second[posTwo])
        found = 1;
      else
        posTwo++;
    }
    
    if (found == 1)
      second[posTwo] = ".";
    else
      ok = 0;    

    posOne++;
  }
  
  return ok; 
}


int main(void){
  
  char first[LEN],second[LEN];
  printf("Ilk Kelimeyi Giriniz: \n");
  scanf("%s",&first);

  printf("Ikinci kelimeyi Giriniz: \n");
  scanf("%s",&second);
  
  printf("\"%s\" ve \"%s\" anagram",first,second);
  if(anagram_kontrol(first,second) == 1)
    printf("dir\n");
  else
    printf(" degildir\n");

  return 0;
}


