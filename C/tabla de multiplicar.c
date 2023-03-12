//Tablas de multiplicar según el numero

#include<stdio.h>
#include<stdlib.h>

void tabla(int num);

int main(){
	int num;
	
	printf("Digite el numero: "); scanf("%i",&num);
	
	tabla(num);
	
	printf("\n\n");
	system("pause");
	return 0;
}

void tabla(int num){
	
	printf("\n");
	for(int i= 0; i<= 10; i++){
		printf("%i x %i = %i \n",num,i,num*i);	
	}
}
