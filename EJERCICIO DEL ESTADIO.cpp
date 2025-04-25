#include <stdio.h>
#include <conio.h>
int main ()
{
float entrada;
char opcion;
int cantidad;
printf("BIENVENIDOS AL ESTADO CUSCATLAN\n");
printf("Sectores del estadio:\n");
printf("A. Sol General \n");
printf("B. Sol preferentes \n");
printf("C. Sombra\n");
printf("D. Tribuna\n");
printf("E. Platea\n");

printf("Elegí una opción (A, B, C,D, E): ");
scanf(" %c", &opcion); 

switch(opcion) {
case 'A':
case 'a':
	printf("Elegiste la zona Sol General.\n");
	printf("Ingresá la cantidad de entradas que querés comprar en este sector:\n");
	scanf("%d", &cantidad);  // Usamos 'cantidad' y con &
	printf("Vas a comprar %d entradas.\n", cantidad);
	entrada=(cantidad*3);
	printf("El total de tu compra por  %d  es de  $ %3.f", cantidad, entrada);
	break;
	
case 'B':
case 'b':
	printf("Elegiste la zona Sol Preferente.\n");
	printf("Ingresá la cantidad de entradas que querés comprar en este sector:\n");
	scanf("%d", &cantidad); 
	printf("Vas a comprar %d entradas.\n", cantidad);
	entrada=(cantidad*5);
	printf("El total de tu compra por  %d  es de  $ %3.f", cantidad, entrada);
	break;
case 'C':
case 'c':
	printf("Elegiste la zona Sombra.\n");
	printf("Ingresá la cantidad de entradas que querés comprar en este sector:\n");
	scanf("%d", &cantidad); 
	printf("Vas a comprar %d entradas.\n", cantidad);
	entrada=(cantidad*8);
	printf("El total de tu compra por  %d  es de  $ %3.f", cantidad, entrada);
	break;
case 'D':
case 'd':
	printf("Elegiste la zona Tribuna.\n");
	printf("Ingresá la cantidad de entradas que querés comprar en este sector:\n");
	scanf("%d", &cantidad); 
	printf("Vas a comprar %d entradas.\n", cantidad);
	entrada=(cantidad*15);
	printf("El total de tu compra por  %d  es de  $  %3.f", cantidad, entrada);
	break;
case 'E':
case 'e':
	printf("Elegiste la zona Platea.\n");
	printf("Ingresá la cantidad de entradas que querés comprar en este sector:\n");
	scanf("%d", &cantidad); 
	printf("Vas a comprar %d entradas.\n", cantidad);
	entrada=(cantidad*20);
	printf("El total de tu compra por  %d  es de  $ %3.f\n", cantidad, entrada);
	break;
default:
	printf("No es un sector válido. Por favor, ingresá A, B, C o D.\n");
	break;
}
return 0;
}
