#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *strrev(char *str){
    char c, *front, *back;

    if(!str || !*str)
        return str;
    for(front=str,back=str+strlen(str)-1;front < back;front++,back--){
        c=*front;*front=*back;*back=c;
    }
    return str;
}

int palindrome(char word[]){
	char wordtwo[25];
	strcpy(wordtwo,word);
  strrev(wordtwo);
	if(strcmp(word,wordtwo) == 0)
		return 1;
//		printf("palindrome");
	else
		return 0;
//		printf("no");
}

int main(){
	char c,my[25];
	int i=0,count=0;

	c= getchar();
	while (c != EOF){
		if(isspace(c)){
			i = 0;
			count = count + palindrome(my);
			memset(&my[0], 0, sizeof(my));
		}else{
		  my[i] = c;
		  i = i+1;
		}
		c = getchar();
	}

	printf("Toplam %d palindrom kelime var. \n",count);

	return 0;
}
