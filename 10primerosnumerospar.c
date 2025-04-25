#include <stdio.h>

int main() {
	int opcion;
	int letras;
	int num1;
	int num2;
	
	// Primer menú
	printf("Ingrese la letra:\n");
	printf("1. Y \n");
	printf("2. P \n");
	scanf("%d", &opcion);
	printf("ingrese el primer numero \n");
	scanf("%d",&num1);
	switch(opcion) {
	case 1:
		printf("Elegiste sumar.\n");
		break;
	case 2:
		printf("Elegiste restar.\n");
		break;
	}
	
	return 0;
}
