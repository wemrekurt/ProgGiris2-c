#include <stdio.h>

/**
* Artık Yıl Hesabı Yapılmaktadır.
*/
int leapYear(int year){
  if ( year%4==0 && year%100!=0 || year%400==0 )
    return  1;
  else
    return  0;  
}

/**
* Switch-Case ile Girilen Yılın Kaçıncı Günü Olduğu Hesaplanmaktadır
*/
int calculate(int year, int month, int day){
  int  general = day;
  switch(month-1){
    case 12: general += 31;
    case 11: general += 30;
    case 10: general += 31;
    case 9:  general += 30;
    case 8:  general += 31;
    case 7:  general += 31;
    case 6:  general += 30;
    case 5:  general += 31;
    case 4:  general += 30;
    case 3:  general += 31;
    case 2:  general += 28 + leapYear(year); /* 28+1 veya 28+0 */
    case 1:  general += 31; 
  }
  
  return general;
}



int main(){
  int year, month, day;
  printf("Yil Girin: ");
  scanf("%d",&year);

  printf("Ay Girin: ");
  scanf("%d",&month);

  printf("Gun Girin: ");
  scanf("%d",&day);
  
  printf("%d/%d/%d tarihi %d yilinin %d. gunu  \n",day,month,year,year,calculate(year,month,day)); 
  return 0;
}
