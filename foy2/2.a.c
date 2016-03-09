#include <stdio.h>
#include <ctype.h>

int main(void){
  int c;
  c = getchar();
  while(c != EOF){
    if(islower(c))
      putchar(toupper(c));
    else
      putchar(tolower(c));
    c = getchar();
  }
  return 0;
}

