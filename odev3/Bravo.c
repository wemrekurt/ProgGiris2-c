#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int palindrom (int ch){
	//char vud[10] = *ptr;
	/*int n, reverse = 0;
	n = ch;
	

	while (ch != 0){
      reverse = reverse * 10;
      reverse = reverse + ch%10;
      ch       = ch/10;
   }
   
   //printf("ch = %d \n",n);
   //printf("rvs = %d \n",reverse);
   /*if(n == reverse){
   	printf("palindrome: %c",n);
   }*/
  
   return 0;
}


int main(int argc, char *argv[]){
  int ch, word = 0;
  int ts[100];
  FILE *file = fopen(argv[1], "r");  
   
while ( (ch = fgetc(file)) != EOF ){
	if ( isspace(ch) || ispunct(ch) ){
		if ( word ){
			palindrom(ts);
			word = 0;
			//putchar('\n');
		}
	}else{
		word = word + 1;
		ts[word] = ch;
	}
	
}	
  fclose(file);

  return 0;
}
