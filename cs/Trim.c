#include <stdio.h>
#include <ctype.h>

  enum BeginningOfFile {TRUE, FALSE};
  enum StateType {NORMAL, INWORD};
 
int main(void){
  int c = getchar();
  int temp;
  enum BeginningOfFile bof = TRUE;
  enum StateType state = NORMAL;
  
  for(; ;){
    
    if(bof == FALSE) c=getchar();
    if(c == EOF || c == 4) break;
    
    switch(state){
      case NORMAL:
        if(isalpha(c)){
          putchar(c);
          bof = FALSE;        
          state = INWORD;
        }else{
          if(bof == TRUE){
            c = getchar();
            if(isalpha(c)){
              bof = FALSE;
              putchar(c);
            }
          }else{
            putchar(c);
          }
          state = NORMAL;
        }       
       break;
      case INWORD:
        putchar(c);
        if(!isalpha(c)){
          state = NORMAL;
          if(c == '.'){
            bof = TRUE;
            c = getchar();
          }
        }else{
        }

        break;
    }

  }

  return 0;
}
