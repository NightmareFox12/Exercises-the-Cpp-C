//Programa que me de la multiplicacion de numeros en C

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n1,n2,multiplicacion = 0;
	
	printf("Digite un numero: ");
	scanf("%i",&n1);
	printf("Digite otro numero: ");
	scanf("%i",&n2);
	
	multiplicacion = n1 * n2;
	
	printf("\nLa multiplicacion es: %i", multiplicacion );
	
	
	
	system("pause");
	return 0;
}
