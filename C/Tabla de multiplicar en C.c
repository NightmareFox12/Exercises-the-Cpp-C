#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int multiplo;
	
	printf("Digite un numero: "); scanf("%i",&multiplo);
	
	for(int i=1; i<=10;i++){
		
		printf("\n%i * %i = %i",multiplo,i,multiplo*i);
	}

	printf("\n\n");
	
	system("pause");
	return 0;
}
