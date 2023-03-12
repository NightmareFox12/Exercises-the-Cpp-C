#include<stdio.h>

int main(){
	
	int n1,i;
	printf("Digite el total de numeros a comprobar: ");scanf("%i",n1);
	
	
	i = 1;
	
	while(i<=n1){
	if(i%5==0){ 
	
		 printf("%i.\n",i);
	
	  }else{
	  }
      i++;
	}
	
	return 0;
}
