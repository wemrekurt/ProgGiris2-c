#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  int sum=0,i = 2;
  
  sum = atoi(argv[1]);
  while (i < argc){
    if(strcmp(argv[i], "+") == 0){
      sum = sum + atoi(argv[i+1]);
    }else if(strcmp(argv[i], "-") == 0){
      sum = sum - atoi(argv[i+1]);
    }else if(strcmp(argv[i], "x") == 0){
      sum = sum * atoi(argv[i+1]);
    }else if(strcmp(argv[i], "/") == 0){
      sum = sum / atoi(argv[i+1]);
    }
    
    i = i+1;
  }
    printf("Toplam: %d \n",sum);
  
  return 0;
}
