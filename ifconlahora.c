#include <stdio.h>
#include <conio.h>

int main() {
	int hora;
	scanf("%d", &hora);
	
	if ((hora >= 0) && (hora < 12))
		printf("Buenos d�as");
	else if ((hora >= 12) && (hora < 18))
		printf("Buenas tardes");
	else if ((hora >= 18) && (hora < 24))
		printf("Buenas noches");
	else
		printf("Hora no v�lida");
	
	getch();
	return 0;
}
