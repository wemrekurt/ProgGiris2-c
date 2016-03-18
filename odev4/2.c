// Soru 2. a
#include <stdio.h> // include <kutuphane.h> şeklinde çalışır. ; fazlalıktır
#define mesaj  "kopya cekmek hirsizliktir" // define tanımlanırken = operatörüne gerek yoktur. Ayrıca puts(mesaj); ifadesi main fonksiyonu veya başka bir fonksiyon içinde yazılmalıdır.


// Soru 2. b
int function(int argt){
  return argt -1;
}

/* 
  1. İnt şeklinde bir ifade yoktur, doğrusu int olmalıdır. 
  2. fonksiyon parametre aldığı yere void yazdığımızda, fonksiyonun herhangi bir parametre almadan çalışacağını söylemiş oluyoruz. Hem void deyip hem parametre gönderemeyiz. Eğer parametre göndereceksek göndereceğimiz paramtreyi ve türünü yazmalıyız. Fonksiyon içeriğinde gönderilen parametreyle matematiksel işlem yapılacağı görüldüğünden int function(int argt) şeklinde olmalıdır.
  3. return arg1 -1; bu ifade sanırım fonksiyonun alacağı parametreyle işlem yapacak. arg1 yerine argt yazarsak bu işlevi yapmış oluruz.
*/

int main(void){
  puts(mesaj);
}
