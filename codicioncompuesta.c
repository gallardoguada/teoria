#include <stdio.h>
#include <conio.h>

int main() {
	int num, m = 0;
	printf("Teclee un número: ");
	scanf("%d", &num);
	
	// IF con condición compuesta
	if (num >= 0 && num <= 10) {
		m = 2 * num;
		printf("El duplo de %d es %d", num, m);
	} else {
		printf("No realizar ninguna operación\n");
	}
	
	getch();
	return 0;
}
