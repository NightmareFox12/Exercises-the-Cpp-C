#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void opciones();
void ingresoCategoria (int op);
void informacion();
void empezarJuego (char palabras[][10], char nombre[]);
void dibujo (int intentos);

int main(){

	opciones();
	
	printf("\n\n");
	system("pause");
	return 0;
}

void opciones(){
	int op;
	do{
		system("cls");
		printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
		printf("CATEGORIAS\n\n");
		printf("1. Frutas\n");
		printf("2. Animales\n");
		printf("3. Informacion\n\n");
		printf("Ingresa una opcion: ");
		scanf("%i",&op);		
		
	}while(op<1 || op>4);

	if (op==1) ingresoCategoria(op);
	if (op==2) ingresoCategoria(op);
	if (op==3) informacion();
}

void informacion(){
	system("cls");	
	printf("LAS INSTRUCCIONES SON SENCILLAS, SOLO TIENES QUE ELEGIR UNA DE LAS CATEGORIAS\n");
	printf("LAS CUALES TE DARAM UNA PALABRA AL AZAR, DEBES INGRESAR TODA LETRA EN MAYUSCULA.\n\n\n");
	printf("DISFRUTA DEL JUEGO, Y GRACIAS POR JUGAR. ^_^");
	

	printf("\n\nPresione una tecla para volver al juego");
	getch();
	opciones();	
}
void ingresoCategoria (int op){
	char nombrecat[3][8] = {"Frutas","Animales"};
	char frutas [10][10] = {"MELON","PAPAYA","SANDIA","MANZANA","PERA","NARANJA","UVA","CEREZA","CIRUELA","KIWI"};
	char animales [10][10] = {"PERRO","GATO","CABALLO","GALLINA","JIRAFA","MONO","VACA","CONEJO","TORTUGA","LOBO"};
	
	switch(op){
		case 1:
			empezarJuego(frutas,nombrecat[op-1]);
			break;
		case 2:
			empezarJuego(animales,nombrecat[op-1]);
			break;
	}	
}

void empezarJuego (char palabras[][10], char nombre[]){
	int opcion,i,j,k,longitud,espacios,puntos=600;
	char letra;
	int aciertos = 0;
	int intentos = 0;
	int ganar = 0;
	srand(time(NULL));
	
	opcion = rand() % 10; 
	longitud = strlen(palabras[opcion]); 
	char frase[longitud];
	
	for(i=0; i < longitud; i++){
		frase[i] = '_';
	}
	
	do{
		aciertos = 0;
		system("cls");
		printf("\n\t\t\t\tJUEGO EL AHORCADO\n\n");
		printf("CATEGORIA: %s\n\n",nombre);
		printf("Intentos Disponibles: %i\t\t\t\tPuntuacion: %i\n\n",6-intentos,puntos);
		dibujo(intentos);
		
		printf("\n\n\n");
		for(i=0; i < longitud; i++){
			printf(" %c ",frase[i]);
		}
		
		if (intentos == 6){
			printf("\n\nES UNA LASTIMA, PERDISTE!!\n");
			printf("\nLA PALABRA ERA: %s\n\n",palabras[opcion]);
			printf("\n\nPresione una tecla para volver a jugar..");
			getch();
			opciones();	
		}
		
		espacios=0;
		
		for (i = 0; i < longitud; i++){
			if (frase[i] == '_')
				espacios++;
		}
			
		if (espacios == 0){
			printf("\n\nFELICIDADES ADIVINASTE LA PALABRA!!\n\n");
			printf("\nPresiona una tecla para volver a jugar..");
			getch();
			opciones();		
		}
		
		printf("\n\n Digite una letra: ");
		scanf(" %c",&letra);
		
		for (j = 0; j < longitud; j++){
			if (letra == palabras[opcion][j]){
				frase[j] = letra;
				aciertos++;
			}	
		}
		
		if (aciertos == 0){
			intentos++;	
			puntos -= 100;
		}
				
	}while(intentos != 7);
	
	printf("\n\n");		
}

void dibujo (int intentos){
	switch(intentos){
		case 0:
			printf("\n     _______\n    |       |\n    |\n    |\n    |\n    |\n    |\n ----------");
			break;
		case 1:
			printf("\n     _______\n    |       |\n    |       O\n    |\n    |\n    |\n    |\n ----------");
			break;
		case 2:
			printf("\n     _______\n    |       |\n    |       O\n    |       |\n    |\n    |\n    |\n ----------");
			break;
		case 3:
			printf("\n     _______\n    |       |\n    |       O\n    |      /|\n    |\n    |\n    |\n ----------");
			break;
		case 4:
			printf("\n     _______\n    |       |\n    |       O\n    |      /|");
			printf("\\");
			printf("\n");
			printf("    |\n    |\n    |\n ----------");
			break;
		case 5:
			printf("\n     _______\n    |       |\n    |       O\n    |      /|");
			printf("\\");
			printf("\n");
			printf("    |      /\n    |\n    |\n ----------");
			break;
		case 6:
			printf("\n     _______\n    |       |\n    |       O\n    |      /|");
			printf("\\");
			printf("\n");
			printf("    |      / ");
			printf("\\");
			printf("\n");
			printf("    |\n    |\n ----------");
			break;
	}
	
}
