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
		
if (a > b && a > c) {
			printf("el numero mayor es %d", a);
			}
			else {
				if (b > a && b > c) 
					printf("el numero mayor es %d", b);
				else {
				if (c > a && c > b) 
					printf("el numero mayor es %d", c);
			}
	}
	return 0;
}

