#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int main()
{
	int i;
	char palabra[MAX];
	int contador = 0;
	printf("Ingrese una palabra\n");
	scanf("%s",palabra);
	for (i = 0; palabra[i] != '\0' ; ++i)
	{
		switch(palabra[i]){
			case 'a': case 'e': case 'i': case 'o':
			case 'u':
			case 'A': 
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				contador++;
				break;
			default:
				break;
		}
	}
	printf("Se encontraron %d vocales\n", contador);
	return 0;
}
