#include <stdio.h>
#include <stdlib.h>

// Small Steps
int decode(char letter){
  int x = letter;
  return x-4;
}

int encode(char letter){
  int x = letter;
  return x+4;
}

int main(int argc, char *argv[]){
  // argv[1] Source File
  // argv[2] Target File
  // argv[3] Encode/Decode Decision
  FILE *file1, *file2;
  char c;
  file1=fopen(argv[1], "rb");
  file2=fopen(argv[2], "wb");
  
  /** 
   * Decode 
  */
  if(atoi(argv[3]) == 0){
    while (!feof(file1)){
      c = fgetc(file1);
      fputc (decode(c), file2);    
    }
  }

  /**
   * Encode
  */
  else if(atoi(argv[3]) == 1){
    while (!feof(file1)){
      c = fgetc(file1);
      fputc (encode(c), file2);    
    }
  }

  fclose(file1);
  fclose(file2);
  return 0;
}
