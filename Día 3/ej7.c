#include <stdio.h>
#include <stdlib.h>

int main()
{
	float  i;
	float suma = 0;
	for(i = 1; i<=50; i++){
		//Aquí va la suma
		suma = suma + 1/i;
	} 
	printf("Resultado: %f\n", suma);
}







