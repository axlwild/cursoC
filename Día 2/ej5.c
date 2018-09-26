/*
Programa que compara dos numeros y muestra la relacion que tienen

	ENTRADAS: X, Y;

	SALIDAS: Z

*/

#include<stdio.h>
int main(){

	float x,y;

	printf("\n Ingresa dos numeros: ");
	scanf("%f %f", &x,&y);

	printf("\n La relacion que cumplen los numeros %f y %f es: ",x,y);

	if(x==y)
		printf("\n Los numeros %f y %f son iguales\n",x,y);
	if(x<y){
		printf("\n El numero %f es menor a %f\n",x,y);
		}
	if(x>y)
		printf("\n El numero %f es mayor a %f\n",x,y);
	if(x>=y)
		printf("\n El numero %f es mayor o igual a %f\n",x,y);
	if(x<=y)
		printf("\n El numero %f es menor o igual a %f\n",x,y);
	if(x!=y)
		printf("\n El numero %f es diferente a %f",x,y);
	return 0;
}