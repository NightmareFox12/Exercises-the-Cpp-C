/*Suponiendo que el kilo de azucar está en 0,50 y 0,82 de dolar, pida por teclado una cantidad en dolares.
Si la mitad introducida se destina a comprar azucar, una tercera parte a comprar café y el resto no se
gasta, calcule cuantos kilos de cafe y azucar se puede comprar y calcule cuanto queda */

#include<stdio.h>
#include<stdlib.h>

int main(){
float dolar, mitad=0, terceraParte=0, resultado=0, azucarListo=0,cafeListo=0;
float azucar= 0.50,	cafe = 0.82;

	printf("Digite la cantidad de dolares: "); scanf("%f",&dolar);
	
	mitad = dolar/2;
	terceraParte = dolar/3;
	
	resultado = (mitad - terceraParte);
	resultado - dolar;
	
	azucarListo = mitad / azucar;
	cafeListo = terceraParte / cafe;
	
	
	printf("\n\n Kilos de cafe comprados:  %.2f",cafeListo);
	printf("\n Kilos de azucar comprados:  %.2f",azucarListo);
	printf("\n El dinero que le quedo:  %.2f",resultado);
	
	
	printf("\n\n\n");
	system("pause");
	return 0;
}
