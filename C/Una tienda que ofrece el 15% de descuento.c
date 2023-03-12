/*Una tienda ofrece un descuento de 15% sobre total de compra
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float total_compra, descuento,precio;
	
	printf("Digite el total de compra: ");
	scanf("%f",&total_compra);
	
	descuento = total_compra * 0.15;
	precio = total_compra - descuento;
	
	printf("El precio final de la compra es $%.2f",precio);
	
	system("pause");
	return 0;
}
