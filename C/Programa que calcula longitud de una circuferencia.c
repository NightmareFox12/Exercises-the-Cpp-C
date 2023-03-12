/*Un programa en C que ubique las longitudes de una circuferencia xd

Formula = Longitud=2xRadioxPI
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float radio, Pi=3.14, longitud, diametro = 2;
	
	printf("Digite el radio: ");
	scanf("%f",&radio);
	
	longitud =  diametro * radio * Pi;

	printf("\nLa longitud de la circuferencia es: %.2f",longitud);
	
	system("pause");
	return 0;
}
