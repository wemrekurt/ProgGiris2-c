#include <stdio.h>
#include <ctype.h>

int main(void){
  int c;

  for ( ; ; ){
    c = getchar();
    if(islower(c)){
      putchar(toupper(c));
    }else{
      putchar(tolower(c));
    }
  }
  return 0;
}
