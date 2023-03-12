//Un programa que diga si un estudiante esta raspao 

#include<stdio.h>

int main(){
	
	float nota;
	
	printf("Digite la nota del examen: ");
	scanf("%f",&nota);
	
	if(nota >10.5){
		puts("El estudiante esta aprobado");
	}
	else{
		puts("El estudiante esta desaprobado");
	}
	
		return 0;
}
