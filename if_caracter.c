#include <stdio.h>
#include <conio.h>

int main() {
	int num, m = 0;
	printf("Teclee un número: ");
	scanf("%d", &num);
	
	// IF con bloque de instrucciones
	if (num <= 10) {
		m = 2 * num;
		printf("El duplo de %d es %d", num, m);
	} else {
		m = 3 * num;
		printf("El triplo de %d es %d\n", num, m);
	}
	
	getch();
	return 0;
}
