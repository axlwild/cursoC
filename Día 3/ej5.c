#include <stdio.h>
#include <stdlib.h>

int main()
{
	int contador = 0;
	int contadorImpar = 0;

	for(;contadorImpar < 10; ++contador){
	//Imprime del 0 al 10
		if (contador%2)
		{
			printf("%d\n", contador);
			contadorImpar++;
		}

	}
	return 0;
}

