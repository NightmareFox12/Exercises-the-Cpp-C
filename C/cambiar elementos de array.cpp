//Realizar una funcion que me permita intercambiar elementos de un array

#include<stdio.h>
#include<conio.h>

void frutas(int num);

int main(){
	
    int num;
		
    printf("Digite cuantos elementos tendra el arreglo: "); 
	scanf("%i",&num);
    frutas(num);
  
	getch();
	return 0;
}

void frutas(int num){

	char elemento[10][20];
    char elemento2[10][20];

     if(num == 0){
	  printf("\nEl numero es 0");
	   getch();
     } 
 	 else {
 	 	printf("\nArray 1:\n");	 	
	   for(int i=0; i<num; i++){
	    printf("[ %i ]<<Digite un elemento: ",i+1);
	     scanf("%s",&elemento[i]);      
	   }
	   printf("\nArray 2:\n");
	    for(int i=0; i<num; i++){
	     printf("[ %i ]<<Digite un elemento ",i+1);
	      scanf("%s",&elemento2[i]);      
	   } 
	     printf("\nNuevo Array:\n");
	     for(int j=0; j<num; j++){ 
	     	if(j%2==0) printf("\n[ %i ]>> %s",j+1,elemento[j]);
	     	 else printf("\n[ %i ]>> %s",j+1,elemento2[j]);   
	     }      
	 }	  
}

