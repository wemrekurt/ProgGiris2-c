#include <stdio.h>
// 835e84f5b240d2427375e168a7df3c87
int setTag(char *p){
  int c,i;
  p[1]=0;
  for(i=0, c = getchar(); c != ' '; c = getchar(),i++){
    p[i] = c;
  }
}

int printTag(char *p, int where){
  if (where == 0){
    if(*p == 'y')
      printf("<!--");
    else if(*p == 'c')
      printf("<center>");
    else if(*p == 'k')
      printf("<small>");
    else
      printf("<%s>",p);
  }else{
    if(*p == 'y')
      printf("-->");
    else if(*p == 'c')
      printf("</center>");
    else if(*p == 'k')
      printf("</small>");
    else
      printf("</%s>",p);
  }
}


int tagger(char *p){
  if(p[0] == 0){
    setTag(p);
    printTag(p,0);
  }else{
    printTag(p,1);
    setTag(p);
    printTag(p,0);
  }
}

int main (){
  int i,c,tag = 0;
  char a[3] = {0,0,0};
  char *p;
  p = a;

  for(c = getchar(); c != EOF; c = getchar()){
    if(c == '#'){
      tagger(p);
    }else{
      putchar(c);
    }
  }
  printTag(p,0);
  printf("\n");
}
