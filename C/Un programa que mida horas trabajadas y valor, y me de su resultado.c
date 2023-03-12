/*Dadas las horas trabajadas de una persona y el valor por hora. 
calcular su salario e imprimirlo (DUDOSOOOO)
*/

#include<stdio.h>

int main(){
	
	float horas, valor_hora, salario;
	
	printf("Digite cuantas horas trabaja: ");
	scanf("%f",&horas);
	
	printf("Digite el valor de la hora: ");
	scanf("%f",&valor_hora);
	
	salario = valor_hora * horas;
	
	printf("Su salario sera: $%.2f",salario);
	
	return 0;
}
