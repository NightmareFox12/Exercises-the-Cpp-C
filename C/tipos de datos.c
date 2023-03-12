//Tipos de datos en C

#include<stdio.h>

int main(){
	
	char a = 'a';//tamaño 1byte y su Rango: 0...255
	short b = -15; //tamaño 2bytes y su Rango: -128...127
	int c = 1025; //tamaño 2bytes y su Rango: -32768...32767
	unsigned int d =42325; //tamaño 2 bytes y su Rango 0...65535
	long e = 2656767; //tamaño 4 bytes y su Rango -2147483649..2147483837
	float f = 15.17; //tamaño 4 bytes 
	double g= 12345678.234565; //tamaño 8 bytes  igual que double
	
	
	printf("El elemento es: %f",f);
	
	return 0;
}


