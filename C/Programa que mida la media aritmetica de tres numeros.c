/*Como medir la media aritmetica de tres numeros cualquiera en C
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float a,b,c,resultado;
	
	printf("Digite el primer numero: "); scanf("%f",&a);
	printf("Digite el segundo numero: "); scanf("%f",&b);
	printf("Digite tercer numero: "); scanf("%f",&c);
	
	resultado =(a+b+c)/3;
	
	printf("\nEl resultado es: %f",resultado);
	
	system("pause");
	return 0;
}
