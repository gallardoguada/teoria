#include <stdio.h>

int main() {
	float nota1, nota2, nota3, notafinal, p1, p2, p3, v1, v2, v3;
	
	printf("Ingrese la primera nota: \n");
	scanf("%f", &nota1);
	
	printf("Ingrese la segunda nota: \n");
	scanf("%f", &nota2);
	
	printf("Ingrese la tercera nota : \n");
	scanf("%f", &nota3);
	
	p1 = 0.3;
	p2 = 0.5;
	p3 = 0.6; 
	notafinal = (p1 * nota1) + (p2 * nota2) + (p3 * nota3);
	v1=(p1*nota1);
	v2=(p2*nota2);
	v3=(p3*nota3);
	printf("La nota final es: %.2f\n", notafinal);
	
	printf ("el calculo de las notas con sus ponderaciones es la siguiente .\n");
	printf("Calculo de las ponderaciones fue el siguiente.\n");
	printf("nota 1 ingresada: %.2f por 0.3  que dio como resultado  %.2f \n",nota1, v1);
	printf("nota 2 ingresada: %.2f  por 0,5 que dio como resultado  %.2f  \n",nota2,v2);
	printf("nota 3 ingresada: %.2f por 0,6  que dio como resultado  %.2f \n",nota3, v3);
	
	if (notafinal < 6) {
		printf("El parcial está desaprobado.\n"); 

	} else if (notafinal >= 6 && notafinal < 8) {
		printf("El examen está regularizado.\n");
	} else if (notafinal >= 8) {
		printf("El parcial está promocionado.\n");
	}
	
	return 0;
}
