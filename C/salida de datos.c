//Que al ingresar mi nombre me lo diga

#include<stdio.h>

int main (){

char x[50];

printf("Digite su nombre y apellido: ");
gets(x);

printf("Su nombre y apellido: %s",x);



return 0;
}
