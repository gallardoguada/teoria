#include <stdio.h>

int main() {
	int numero;
	
	printf("Ingrese un n�mero: ");
	scanf("%d", &numero);
	
	if (numero > 50 && numero % 7 == 0) {
		printf("El n�mero %d es m�ltiplo de 7 y mayor que 50.\n", numero);
	} else {
		printf("El n�mero %d no cumple con las condiciones.\n", numero);
	}
	
	return 0;
}
