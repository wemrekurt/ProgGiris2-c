#include <stdio.h>
#include <ctype.h>

/*
Space and "(),:;<>@[\] characters are allowed with restrictions
32 , 34, 40, 41, 44, 58, 59, 60, 62, 64(@), 91,92,93
*/

enum StateType {TRUE, FALSE};
enum WhereType {LEFT, RIGHT};
  
int main (void){

  int c,countAt = 0, countDot = 0;  
  enum StateType state = TRUE;
  enum WhereType where = LEFT;

  c = getchar();
  while(c != '\n' && state == TRUE){
    if(c == 32 || c == 34 || c == 40 || c == 41 || c == 44 || c == 58 || c == 59 || c == 60 || c == 62 || c == 64 || c == 91 || c == 92 || c == 93){
      if(where == LEFT && c == 64){
        state = TRUE;
        where = RIGHT;
      }else{
        state = FALSE;
        break;
      }
    }else{
      if(where == RIGHT){
        if(c == 46)
          countDot += 1;
      }
    }
    c = getchar();
  }

  
  if(state == FALSE || countDot < 1)
    printf("Bu e posta adresi gecersiz! \n");
  else{
    printf("Gecerli bir e-posta adresi \n");
  }

  return 0;
}
