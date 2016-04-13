#include <stdio.h>
#include <string.h>
#define LEN 20

int censor(char word[LEN], char check[LEN]){
  int i = 0,isCensored = 0;

  for(i; i < strlen(word); i++){
    if(word[i] == check[i]){
      isCensored = 1;
    }else{
      isCensored = 0;
      break;
    }
  }

  return isCensored;

}

int main (int argc, char *argv[]){
  char c;
  int i=0,isEr=0;
  char word[LEN] = "asde";
  char check[LEN];

  for(c = getchar(); c != EOF; c = getchar()){
    
    if(c == ' '){
      if(censor(word,check) == 1){
        printf("Sansur Uygulanmali! \n");
        break;
      }else{
        // char check sıfırlamak için
        memset(&check[0], 0, sizeof(check));
      }
      i=0;
    }else{
      check[i] = c;  
      i++;
    }
  }

  return 0;
}

//gist: 3eb29a58c6ccf9e0754d24b196c87539

