//Tipos de datos en C

#include<stdio.h>

int main(){
	
	char a = 'a';//tama�o 1byte y su Rango: 0...255
	short b = -15; //tama�o 2bytes y su Rango: -128...127
	int c = 1025; //tama�o 2bytes y su Rango: -32768...32767
	unsigned int d =42325; //tama�o 2 bytes y su Rango 0...65535
	long e = 2656767; //tama�o 4 bytes y su Rango -2147483649..2147483837
	float f = 15.17; //tama�o 4 bytes 
	double g= 12345678.234565; //tama�o 8 bytes  igual que double
	
	
	printf("El elemento es: %f",f);
	
	return 0;
}


