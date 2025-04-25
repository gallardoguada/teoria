#include <stdio.h>

int main() {
	char sector;
	float precio;
	
	printf("Seleccione el sector:\n");
	printf("A. Sector A ($3)\n");
	printf("B. Sector B ($5)\n");
	printf("C. Sector C ($8)\n");
	printf("D. Sector D ($15)\n");
	printf("E. Sector E ($20)\n");
		
	printf("Ingrese la letra del sector: ");
	scanf(" %c", &sector);
	
	switch (sector) {
	case 'A':
	case 'a':
		precio = 100.0;
		printf("Usted seleccionó el Sector A\n");
		break;
	case 'B':
	case 'b':
		precio = 80.0;
		printf("Usted seleccionó el Sector B\n");
		break;
	case 'C':
	case 'c':
		precio = 60.0;
		printf("Usted seleccionó el Sector C\n");
		break;
	case 'D':
	case 'd':
		precio = 40.0;
		printf("Usted seleccionó el Sector D\n");
		break;
	case 'E':
	case 'e':
		precio = 20.0;
		printf("Usted seleccionó el Sector E\n");
		break;
	default:
		printf("Error: No existe opción ingresada \n");
		return 1;
	}
	
	printf("Precio: $%.2f\n", precio);
	
	return 0;
}
