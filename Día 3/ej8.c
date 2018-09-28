#include<stdio.h>

int main()
{
	int clave, clave2;

	do{
	printf("\n Ingresa tu contraseña: ");
	scanf("%d",&clave);
	printf("\n Ingresa tu contraseña nuevamente: ");
	scanf("%d",&clave2);
	if(clave!=clave2)
		printf("\n No eres bienvenido\n");
	}
	while(clave!=clave2);
	printf("\n Bienvenido\n");


	return 0;
}

