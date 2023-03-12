//Escriba una funcion que verifique si un numero entero es polindrome

#include<stdio.h>
#include<stdlib.h>

int invertir(int n);
bool polindromo(int n);
//int polindromo(int n);

int main(){
	
	int num;
	
	printf("Digite el numero: "); scanf("%i",&num);
	
	if(polindromo(num)) printf("El numero SI es polindromo");
	else printf("El numero NO es polindromo");

	printf("\n\n");
	return 0;
}

int invertir(int n){
	int respuesta = 0;
	
	while(n > 0){
		respuesta = respuesta + n % 10;
		respuesta = respuesta * 10;
		n = n/10;
	}
	return respuesta/10;
}

bool polindromo(int n){
	if(n == invertir(n)) return true; 
    return false;   
}

/*int polindromo(int n){
	if(n == invertir(n)) return 1; 
    return 0;   
}*/

