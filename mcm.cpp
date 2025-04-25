#include <stdio.h>
int calcularMCD(int a, int b) {
	int temp;
	while (b != 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}


int calcularMCM(int a, int b) {
	if (a == 0 || b == 0) {
		return 0;
	}
	return (a * b) / calcularMCD(a, b);
}

int main() {
	int num1, num2;
	
	printf("Ingrese el primer numero entero no negativo: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo numero entero no negativo: ");
	scanf("%d", &num2);
	
	if (num1 < 0 || num2 < 0) {
		printf("Por favor, ingrese numeros enteros no negativos.\n");
		return 1;
	} else {
		int mcm = calcularMCM(num1, num2);
		printf("El Mínimo Común Múltiplo de %d y %d es: %d\n", num1, num2, mcm);
	}
	
	return 0;
}
