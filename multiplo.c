#include <stdio.h>

int main() {
	int numero;
	
	printf("Ingrese un número: ");
	scanf("%d", &numero);
	
	if (numero > 50 && numero % 7 == 0) {
		printf("El número %d es múltiplo de 7 y mayor que 50.\n", numero);
	} else {
		printf("El número %d no cumple con las condiciones.\n", numero);
	}
	
	return 0;
}
