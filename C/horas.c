/*Escribir un hora y minutos y segundos, calcule cuantos segundos han pasado desde la hora 00:00
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

long segundosTotal;
int horas, minutos, segundos;
bool repetir = false;

int opc;
int hora, minuto, segundo;

do{

printf("\n1- Digitar hora completa\n");
printf("2- digitar en segundos\n\n");
printf("Digite su opcion: "); scanf("%i",&opc);

}while(opc > 2 || opc < 0);
printf("\n\n");

if (opc == 1) {
     printf("Digite la hora separando las cifras por comas: ");
	scanf("%i,%i,%i",&hora,&minuto,&segundo);
	
if (hora <= 24 && minuto <= 59 && segundo <= 59 || hora < 0 || minuto < 0 || segundo < 0){
	  printf("\nLa hora que digito es:  %i : %i : %i ",hora,minuto,segundo);
} else {
	printf("Usted digito una hora invalida");
}
		
}

if (opc == 2){

do {

printf("Digite los segundos transcurridos del dia: ");  scanf("%i",&segundosTotal);

 horas = segundosTotal/3600;
 segundosTotal %= 3600;
 minutos = segundosTotal / 60;
 segundos = segundosTotal % 60;


if (horas <= 24 && minutos <= 59 && segundos <= 59 || horas < 0 || minutos < 0 || segundos < 0){
	printf("\n\nLa hora que digito es:  %i : %i : %i",horas,minutos,segundos);
	repetir = false;
} else {
	printf("\n\nEl numero que usted digito es muy elevado \n\n");
	repetir = true;
}

} while(repetir == true);

}


   printf("\n\n\n");
   system("pause");
   return 0;
}



