#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
1 Byte = 8 bits
1 kiloByte ( kb ) = 1 024 Bytes
1 megaByte (Mb) = 1 024 kb = 1 048 576 Bytes 
*/


float calculate(float bit){
	float mb,byte;
	enum data { bt = 8, mbt = 1048576};
	enum data bter = bt;
	enum data mbter = mbt;

	byte = bit / bter;

	mb = byte / mbter;
	return  mb;
	//return bit * 2;
}

int main (void){
	float bt,mb;

	while(bt != 0){
		printf("Bit Degeri Giriniz: ");
		scanf("%f",&bt);
		mb = calculate(bt);

		if(bt != 0.00)
			printf("%5.2f \n",mb);
	}
	
}