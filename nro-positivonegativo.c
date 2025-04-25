#include <stdio.h>
#include <conio.h>

int main() {
	int num;
	printf("Ingrese un número entero por teclado: ");
	scanf("%d", &num);
	
	// Ejemplo de IF con ELSE
	if (num > 0)
		printf("%d es POSITIVO", num);
	else
		printf("%d es negativo o igual a cero\n", num);
	
	getch();
	return 0;
}
