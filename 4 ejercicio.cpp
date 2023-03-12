/*Elaborar un programa que permita llevar un control de gastos por un año, almacenar los rubros:
*Vivienda, Alimentacion, y Educacion
Reporte general, promedio de gastos por mes, y el mes donde presentó mayor volumen de gastos.
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

void menu();
float meses(float num);

int main(){
	system("color 1f"); 
	
    menu();
    
	getch();
	return 0;
}

void menu(){
  int opc;
  
   printf("\t\t\t.:Control de gastos:.\n\n");
  
  do {
	 printf("\t\tSeleccione alguna opcion para iniciar el programa\n");
	 printf("\n1. Gastos de rubros por mes.");
	 printf("\n\nDigite su opcion: ");
	 scanf("%i",&opc); system("cls");
	 
  } while(opc > 1);
	
 if(opc == 1) meses(opc); 
      
}

float meses(float num){
    
  char meses[12][20] = {"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
  float totalV,totalA,totalE,promedio,res=0,res2=0,res3=0,mesV,mesA,mesE;
  int mayor,mayor2,mayor3;
  
   for(int i=0; i<=11; i++){
      	
	 float vivi[i],alime[i],edu[i];
	 
         printf("\t\t%s\n",meses[i]);
         printf("1. Vivienda: "); scanf("%f",&vivi[i]);
         printf("2. Alimentacion: "); scanf("%f",&alime[i]);
         printf("3. Educacion: "); scanf("%f",&edu[i]);  
         
         if(vivi[i] > res){
		 	res = vivi[i];  mayor = i;
		 }
		 if(alime[i] > res2){
		 	res2 = alime[i];  mayor2 = i;
		 }
		 if(edu[i] > res3){
		 	res3 = edu[i];	mayor3 = i;
		 }
		 
		 totalV+= vivi[i];
		 totalA+= alime[i];
		 totalE+= edu[i];
		 
		 system("cls");		 
  }
    mesV = totalV/12;
    mesA = totalA/12;
    mesE = totalE/12;
    
     promedio = (totalV + totalA + totalE)/12;
   
     if(res > res2 && res > res3) printf("\nEn %s hubo mayor gasto",meses[mayor]);
     if(res2 > res && res2 > res3) printf("\nEn %s hubo mayor gasto",meses[mayor2]);
     if(res3 > res2 && res3 > res) printf("\nEn %s hubo mayor gasto",meses[mayor3]);
     
     printf("\n\nPromedio de gastos en todo el anio: %.2f",promedio);
     printf("\n\nPromedio por mes de:\n\nVivienda: %.2f \nAlimentacion: %.2f \nEducacion: %.2f",mesV,mesA,mesE);
    
}
