#include <stdio.h>

int main() {
	int intentos = 0;
	float lado, perimetro;
	char rta;
	
	do {
		printf("Ingrese el valor del lado del cuadrado: ");
		scanf("%f", &lado);
		
		if (lado > 0) {
			perimetro = 4 * lado;
			printf("El perímetro del cuadrado es: %.2f\n", perimetro);
		} else {
			printf( "El lado del cuadrado debe ser mayor a 0.\n");
		}
		
		printf("queres realizar otro intento? (s/n): ");
		scanf(" %c", &rta);
		
		if (rta == 's' || rta == 'S') {
			intentos++;
		} else {
			break;
		}
	} while (intentos < 3);
	
	if (intentos == 3) {
		printf("Se han realizado 3 intentos.\n");
	}
	
	return 0;
}
