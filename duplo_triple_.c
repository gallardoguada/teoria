#include <stdio.h>
#include <conio.h>

int main() {
	int num, m = 0;
	printf("Teclee un n�mero: ");
	scanf("%d", &num);
	
	// IF con condici�n compuesta
	if (num >= 0 && num <= 10) {
		m = 2 * num;
		printf("El duplo de %d es %d", num, m);
	} else {
		printf("No realizar ninguna operaci�n\n");
	}
	
	getch();
	return 0;
}
