#include <stdio.h>

int main() {
	int numero;
	int contador;

	contador = 1;  // Comienza en 1
	printf ("vamos a imprimir los numeros impares del 1 al 20 \n");
	while (contador <= 10) {
		printf("%d\n", contador);  // Imprime solo los impares: 1, 3, 5, 7, 9
		contador += 2;  // Incrementa de 2 en 2
		}
return 0;
}
