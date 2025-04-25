# include <stdio.h>
int main()
{
	int p,a,c;
	p=0;
	a=0;
	c=0;
while (a <= 0 && c < 3 )
{
		printf ("Ingrese un valor positivo\n");
		scanf ("%d",&a);
		c++;
}
if ( c==3) 
	printf("Ingreso tres veces un valor incorrecto para calcular el perímetro.Debe ingresar un valor positivo");
	else{
	p= a*4;
	printf ("Perimetro= %d\n",p);
	}
					  return 0;
}
