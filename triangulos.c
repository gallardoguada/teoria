#include <stdio.h>
#include <math.h>

int main() {
	float l1, l2, l3;
	
	printf("Ingrese el primer lado del triangulo a analizar: \n");
	scanf("%f", &l1);
	printf("Ingrese el segundo lado del triangulo a analizar: \n");
	scanf("%f", &l2);
	printf("Ingrese el tercer lado del triangulo a analizar: \n");
	scanf("%f", &l3);
	
	if (l1 == l2 && l1 == l3) {
		printf("Todos sus lados son iguales por ende es un triangulo equilatero.\n");
	} else if (l1 != l2 && l1 != l3 && l2 != l3) {
		printf("Todos sus lados son distintos por ende  es un triangulo escaleno.\n");
	} else {
		printf("Dos de sus lados son iguales por ende es un triangulo isosceles.\n");
	}
	
	return 0;
}
