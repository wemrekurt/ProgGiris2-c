#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define LEN 3

// Kullanim: ./Bravo.out + <girdi.txt>cikti.txt (decode icin + , encode icin -)


void decode(){

  char  c,temp;
  int i = 1;

  temp = getchar();
  for(c = getchar(); c != EOF; c = getchar()){
    if(c == temp)
      i++;
    else{
      printf("%d",i);
      putchar(temp);
      temp = c;
      i = 1;
    }
  }

  printf("\n");
}

void encode(){
  char c;
  int i=0;
  char num[LEN];
  for(c = getchar(); c != EOF; c = getchar()){
    if((int)c > 47 && (int)c < 58){
      num[i] = c;
      i++;
    }else{
      for(i=0; i < atoi(num); i++) {
        putchar(c);
      }
      i=0;
    }
  
  }
}

int main(int argc, char *argv[]){ 
 
  if(strcmp(argv[1], "+") == 0){
    decode();
  }else if(strcmp(argv[1], "-") == 0){
    encode();
  }else{
    printf("Gecersiz Komut. + veya - girmelisin \n");
  }
  
  return 0;
}

//gist: 8668a046bfeaf2762f7e832ee580aaba

