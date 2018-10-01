#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main()
{
	float arreglo[MAX],promedio = 0;
	int x,i;	
	printf("¿Cuantos numeros deseas promediar?\n");
	scanf("%d",&x);
	for (i = 0; i < x; ++i)
	{
		printf("Dame la calificación %d\n", i+1);	
		scanf("%f",&arreglo[i]);
		promedio += arreglo[i];
	}
	promedio /= x;
	printf("El promedio es: %.2f\n",promedio);
}


