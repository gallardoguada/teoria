#include <stdio.h>

int main() {
	int num1, num2, acum;
	printf("Ingrese el primer numero entero: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo numero entero: ");
	scanf("%d", &num2);
	
	if (num1 < 0 || num2 < 0) {
		printf("Por favor, ingrese numeros enteros no negativos.\n");
		return 1; 
	} else if (num1==num2) {
		printf("son iguales no se calcula");
	} else {
		printf(" ingresaste dos numero enteros positivo");
		while (num2 > 0) {
			acum = num2;
			num2 = num1 % num2;
			num1 = acum;
			printf("El maximo comun divisor es: %d\n", num1);
		}
	return 0;
	}
	
	return 0; 
}
