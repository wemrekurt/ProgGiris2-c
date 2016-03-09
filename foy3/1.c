#include <stdio.h>

int main(void){

  char a = 'A'; 
  char h = 'H';
  char* i = &a;


printf ("a nin degeri : %c\n",a);
printf ("a nin adresi : %u\n",i);
printf ("i nin adresi : %u\n",&i);
printf ("i nin gosterdigi degeri : %c\n",*i);
//getchar();


*i = '0';


printf ("a nin degeri : %c\n",a);
printf ("a nin adresi : %u\n",i);
printf ("i nin adresi : %u\n",&i);
printf ("i nin gosterdigi degeri : %c\n",*i);
//getchar();

i = &h;

printf ("a nin degeri : %c\n",a);
printf ("a nin adresi : %u\n",i);
printf ("i nin adresi : %u\n",&i);
printf ("i nin gosterdigi degeri : %c\n",*i);
//getchar();

*i = '0';

printf ("a nin degeri : %c\n",a);
printf ("a nin adresi : %u\n",i);
printf ("i nin adresi : %u\n",&i);
printf ("i nin gosterdigi degeri : %c\n",*i);
//getchar();

return 0;
}
