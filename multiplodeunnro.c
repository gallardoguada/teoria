#include <stdio.h>
#include <conio.h>

int main() {
	int n;
	printf("Teclee un n�mero entero: ");
	scanf("%d", &n);
	
	// Ejemplo de IF para verificar si es divisible por 3
	if (n % 3 == 0)
		printf("%d es divisible por 3\n", n);
	else
		printf("%d No es m�ltiplo de 3\n", n);
	
	getch();
	return 0;
}
