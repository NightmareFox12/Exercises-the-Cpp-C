/*Desarrollar un programa con las sigiuientes opciones:
1) Debe pedir un número comprendido entre 1 al 25 y que sea un número impar. Y calcular la serie numérica
*/

#include<stdio.h>
#include<conio.h>

void serie(int numero);

int main(){
	
	int num;
	
	do {
	   printf("Digite un numero entre 1 al 25: ");
       scanf("%i",&num);
				
	}while(num > 0 && num > 25);
	
	serie(num);
	
	getch();
	return 0;
}

void serie(int numero){
	
	int impar=0;
	
	if(numero == 0) printf("El numero es 0");
	if(numero%2==0 && numero !=0) printf("El numero es par");
    else {
    	for(int i = 0; i<=numero;i++){
    		if(i%2 !=0) {
    			impar+= i;
    		}
    	}
    	printf("La serie numerica es: %i",impar);
    }

}
