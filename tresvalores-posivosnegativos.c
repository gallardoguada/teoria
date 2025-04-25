#include <stdio.h>

int main() {
	float a, b, c;
	
	printf("Ingrese el primer número: ");
	scanf("%f", &a);
	
	printf("Ingrese el segundo número: ");
	scanf("%f", &b);
	
	printf("Ingrese el tercer número: ");
	scanf("%f", &c);
	
	// Análisis del primer número
	if (a > 0)
		printf("El primer valor %.2f es positivo.\n", a);
	else if (a < 0)
		printf("El primer valor %.2f es negativo.\n", a);
	else
		printf("El primer valor es cero.\n");
	
	// Análisis del segundo número
	if (b > 0)
		printf("El segundo valor %.2f es positivo.\n", b);
	else if (b < 0)
		printf("El segundo valor %.2f es negativo.\n", b);
	else
		printf("El segundo valor es cero.\n");
	
	// Análisis del tercer número
	if (c > 0)
		printf("El tercer valor %.2f es positivo.\n", c);
	else if (c < 0)
		printf("El tercer valor %.2f es negativo.\n", c);
	else
		printf("El tercer valor es cero.\n");
	
	return 0;
}
