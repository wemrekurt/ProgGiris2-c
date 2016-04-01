#include <stdio.h>
#include <string.h>
#include <math.h>
#define LEN 15
int armstrong(char num[LEN]){
  int j,i=0,count=0,len = strlen(num);
  for(i;i<len;i++){
    j = num[i] - '0'; // Degerin integer'a donusumu
    count = count + (pow(j,len));
  }
  
  // Char array to int donusumu
  int iNum;
  sscanf(num, "%d", &iNum);
  
  if(count == iNum)
    return 1;
  else
    return 0;
}

int main (){
  int c,i=0;
  char num[LEN];
  
  for(c=getchar(); c != EOF; c=getchar()){
    if(c == '\n'){
      if(armstrong(num) == 1)
        printf("%s narsisttir \n",num);
      else
        printf("%s narsist degildir \n",num);
      char num[LEN];
      i = 0;
    }else{
      num[i] = c;
      i++;
    }
  }

}

// gist: bbcc65dcf61c7baaaeb9
