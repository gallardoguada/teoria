#include <stdio.h>

int main() {
	int opcion;
	int letras;
	
	// Primer men�
	printf("Men� de opciones:\n");
	printf("1. Sumar\n");
	printf("2. Restar\n");
	printf("3. Multiplicar\n");
	printf("4. Salir\n");
	printf("Eleg� una opci�n: ");
	scanf("%d", &opcion);
	
	switch(opcion) {
	case 1:
		printf("Elegiste sumar.\n");
		break;
	case 2:
		printf("Elegiste restar.\n");
		break;
	case 3:
		printf("Elegiste multiplicar.\n");
		break;
	case 4:
		printf("Saliendo del programa...\n");
		break;
	default:
		printf("Opci�n no v�lida.\n");
	}
	
	// Segundo men�
	printf("\nMen� de opciones de letras:\n");
	printf("1. Vocales\n");
	printf("2. Consonantes\n");
	printf("Eleg� una opci�n: ");
	scanf("%d", &letras); // <-- esto faltaba
	
	switch(letras) {
	case 1:
		printf("Elegiste las vocales.\n");
		break;
	case 2:
		printf("Elegiste las consonantes.\n");
		break;
	default:
		printf("Opci�n no v�lida.\n");
	}
	
	return 0;
}
