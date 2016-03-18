#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv [])
{
  FILE* fp = NULL;
  int nfiles = argc-1; /* Programin kendi adi gormezden gelindi  */
  int argidx = 1; /* 0 degeri programin kendi adi oldugu icin */
  char* currfile = 1;
  int read = 0; //Total degerini yazdirma kontrolu icin
  char c;
  /* kelime sayısı, satır sayısı, karakter sayısı */
  unsigned long nw = 0, nl = 0, nc = 0;
  /* Total degerleri */
  unsigned long tw = 0, tl = 0, tc = 0;
  if (nfiles == 0){
    fp = stdin; /* standart girdi */
    nfiles++;
  }else{
    currfile = argv[argidx++];
    fp = fopen(currfile, "r");
  }

  while(nfiles > 0){
    if( fp == NULL){
      fprintf(stderr, "ops: %s: Dosya okunamadi ! \n ",currfile);      
    }else{
      nc = nw = nl = 0;
      while(!feof(fp)){
        c = fgetc(fp);
        if(c == ' ')
          nw++;
        else if(c == '\n'){
          nl++;
          nw++;
        }
        nc++;      
      }
      nc--; // Bir nedenden oturu wc'ye gore 1 fazla gosteriyordu.
      tw = tw + nw;
      tl = tl + nl;
      tc = tc + nc;
      read++;
      printf("%4ld %4ld %4ld %s \n",  nl, nw, nc, currfile);
    }
    nfiles--;
    /* varsa sonraki dosya  */
    if( nfiles > 0){
      currfile = argv[argidx++];
      fp = fopen(currfile, "r");
    }  
  }
  if(read>1) 
  printf("%4ld %4ld %4ld total \n",  tl, tw, tc);
  return 0;
}
