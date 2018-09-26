/*
PROGRAMA QUE REALICE OPERACIONES ARITNETICAS
E IMPRIMA EN ENTERO, FLOTANTE Y DOUBLE
*/

#include<stdio.h>

int main()
{	
	/*
	Entradas: 
	x, y : Int
	Salidas:
	Suma, resta, mult, div, mod
	*/
	int x,y;
	printf("Dame un numero: \n");
	scanf("%d",&x);
	printf("Dame otro numero: \n");
	scanf("%d",&y);
	printf("\nOperaciones con enteros:\n");
	printf("suma:\t%d+%d = %d\n", x, y, x + y);	
	printf("resta:\t%d-%d = %d\n", x, y, x - y);	
	printf("multiplicación:\t%d*%d = %d\n", x, y, x * y);	
	printf("división:\t%d/%d = %d\n", x, y, x / y);	
	printf("Módulo:\t%d/%d = %d\n", x, y, x % y);	

	printf("\nOperaciones con flotantes:\n");
	printf("suma:\t%d+%d = %.2f\n", x, y, (float)(x + y));	
	printf("resta:\t%d-%d = %.2f\n", x, y, (float)(x - y));	
	printf("multiplicación:\t%d*%d = %.2f\n", x, y, (float)(x * y));	
	printf("división:\t%d/%d = %.2f\n", x, y, (float) x / (float) y);	
	printf("Módulo:\t%d/%d = %.2f\n", x, y, (float)(x % y));	
	return 0;
}