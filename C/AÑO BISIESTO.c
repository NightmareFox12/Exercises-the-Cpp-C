//Escribe un programa que diga si el año 2080 es bisiesto o no en C

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int anio;
	
	printf("Digite un anio: ");
	scanf("%i",&anio);
	
	if(anio %4== 0 && anio %100!= 0){
		printf("SI es bisiesto");
	}
	else{
	    printf("NO es bisiesto");
	}
	system("pause");
	return 0;
}
