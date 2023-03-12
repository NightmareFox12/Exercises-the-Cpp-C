/*Un programa que reciba un argumento: un conjunto de números y calcular la media aritmetica de la misma
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void media(int numero);
int main(){
	
	int numero;
	
	printf("Digite cuanto numeros para la media aritmetica: "); 
	scanf("%i",&numero);
	system("cls");
	media(numero);
		
	getch();
	return 0;
}

void media(int numero){
	
	int listo=0,suma,divisor=0,res=0;
	
	for(int i=0; i<numero; i++){
		printf("Digite un numero: ");
		scanf("%i",&suma);
	    listo += suma;
	}
	
	res = listo / numero;
	
	printf("\nLa media aritmetica es: %i",res);
		
}
