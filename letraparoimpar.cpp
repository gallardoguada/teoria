#include <stdio.h>

int main() {
	int num1;
	int num2;
	int menor; 
	int mayor;
	char letra;
	
	printf("Ingresa el primer nro: ");
	scanf("%d", &num1);
	
	printf("Ingresa el segundo nro: ");
	scanf("%d", &num2);
	
	printf("Ingresa una letra (y para impares, p para pares): ");
	scanf(" %c", &letra);
	
	if (num1 < num2) {
		menor = num1;
		mayor = num2;
	} else {
		menor = num2;
		mayor = num1;
	}
	
	if (letra == 'p') {
		printf("\nNúmeros pares entre %d y %d:\n", menor, mayor);
		int contador = 0;
		for (int i = menor; i <= mayor; i++) {
			if (i % 2 == 0) {
				printf("%d\t", i);
				contador++;
				if (contador % 2 == 0) {
					printf("\n");
				}
			}
		}
		if (contador % 2 != 0) {
			printf("\n");
		}
	} else if (letra == 'y') {
		printf("\nNúmeros impares entre %d y %d:\n", menor, mayor);
		int contador = 0;
		for (int i = menor; i <= mayor; i++) {
			if (i % 2 != 0) {
				printf("%d\t", i); 
				contador++;
				if (contador % 2 == 0) {
					printf("\n");
				}
			}
		}
		if (contador % 2 != 0) {
			printf("\n");
		}
	} else {
		printf("No ingresaste ninuna letra valida para alalizar. fin del programa.\n");
	}
	
	return 0;
}
