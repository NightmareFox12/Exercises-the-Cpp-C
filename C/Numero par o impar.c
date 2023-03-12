//Programa que me diga si un numero es impar o par

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int numero;
	
	printf("Digite un numero entero: ");
	scanf("%i",&numero);
	
	if(numero==0){
		printf("Es cero");
	}else if(numero%2==0){
		printf("SI es par");
	}
	else{
		printf("NO es par");
	}
	system("pause");
	return 0;
}
