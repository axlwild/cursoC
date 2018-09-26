/*

Programa que calcula el mayor de tres numeros

	ENTRADA: A,B,C;

	SALIDA: RESULTADO;
*/

#include<stdio.h>

int main(){
	int a,b,c;
	printf("\n Ingresa tres numeros: ");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b)
		if(a>c)
			printf("\n El numero mayor es: %d\n",a);
		else
			printf("\n El numero mayor es: %d\n",c);
	else
	if(b>c)
		printf("\n El numero mayor es: %d\n",b);
	else
		printf("\n El numero mayor es: %d\n",c);
	return 0;


}