#include <stdio.h>

int main() {
	int a, b, c;
	
	printf("Ingrese el primer valor a evaluar: ");
	scanf("%d", &a);
	printf("\n");
	
	printf("Ingrese el segundo nro a evaluar: ");
	scanf("%d", &b);
	printf("\n");
	
	printf("Ingrese el tercer nro a evaluar: ");
	scanf("%d", &c);
	printf("\n");
	
	if (a > b) {
		if (b > c) {
			printf("El orden de mayor a menor es: %d, %d, %d\n", a, b, c);
		} else if (a > c) {
			printf("El orden de mayor a menor es: %d, %d, %d\n", a, c, b);
		} else {
			printf("El orden de mayor a menor es: %d, %d, %d\n", c, a, b);
		}
		
	} 
	else {
			if (a > c) {
			printf("El orden de mayor a menor es: %d, %d, %d\n", b, a, c);
			} 
			else {
			} if (b > c){
				printf("El orden de mayor a menor es: %d, %d, %d\n", b, c, a);
				} else {
			printf("El orden de mayor a menor es: %d, %d, %d\n", c, b, a);
			}
	}
	
	return 0;
}
