#include<stdio.h>

int main(){
	int a, b, opcion, resultado;
	printf("\n Ingresa un numero: ");
	scanf("%d",&a);
	printf("\n Ingresa otro un numero: ");
	scanf("%d",&b);
	printf("\n Opcion 1: Suma \n Opcion 2: Resta \n Opcion 3: Multiplicacion \n Opcion 4: Division \n");
	printf("\n Elige una opcion: ");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:
			resultado=a+b;
			printf("\n El resultado de la suma es: %d\n",resultado);
			break;
		case 2:
			resultado=a-b;
			printf("\n El resultado de la resta es: %d\n",resultado);
			break;
		case 3:
			resultado=a*b;
			printf("\n El resultado de la multiplicacion es: %d\n",resultado);
			break;
		case 4:
			resultado=a/b;
			printf("\n El resultado de la division es: %d\n",resultado);
			break;
		default:
			printf("\n No valida\n");
			break;
	}
	return 0;
}