#include <stdio.h>

int main() {
	// \n - Salto de l�nea
	printf("Hola\nMundo\n");
	
	// \t - Tabulaci�n
	printf("Nombre\tEdad\nJuan\t20\nAna\t22\n");
	
	// \" - Comillas dobles dentro de una cadena
	printf("Ella dijo: \"Hola, �c�mo est�s?\"\n");
	
	// \\ - Imprimir una barra invertida
	printf("Ruta del archivo: C:\\Usuarios\\Juan\\Documentos\\archivo.txt\n");
	
	// \a - Alerta sonora (beep, puede que no funcione en todas las PCs)
	printf("�Atenci�n!\a\n");
	
	// \r - Retorno de carro
	printf("Sobreescrito\rInicio\n");
	
	return 0;
}
