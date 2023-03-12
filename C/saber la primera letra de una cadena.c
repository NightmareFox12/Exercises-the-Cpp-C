//Funcion que muestre la primera letra de una cadena de caracteres, dicha por teclado

#include<stdio.h>
#include<conio.h>

char frase(char cadena[100]);

int main(){
	
	char cadena[100];	
	printf("Digite una historia: "); scanf("%c",&cadena);
	printf("La primera letra es: %c",frase(cadena));

	getch();
	return 0;
}

char frase(char cadena[100]){
	
  return cadena[0];
}
