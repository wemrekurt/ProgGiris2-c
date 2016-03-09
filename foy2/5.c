#include <stdio.h>

int main (void){
  int c;
  c = getchar();
  char alf[] = "abcdefghijklmnoprstuvyzwqxABCDEFGHIJKLMNOPRSTUVYZWQX";
  while (c != EOF){
    int i=0;
    int found = 0;    
    while(found == 0 && i<52){
      if(alf[i] == c){
        if(i>25){
          c = alf[i-26];
        }else{
          c = alf[i+26];
        }
        found = 1;
      }
      i++;      
    }
  putchar(c);
  c = getchar();
    
  }
  return 0;
}
