#include "stdio.h"
#include "stdlib.h"


int main(){
	int a = 5;
	int *b ;
	b = &a;
	printf("El valor de a es %d\n",a);
	printf("El valor de la dirección de a es %p\n",&a);
	printf("El valor de la dirección de b es %p\n",&b);
	printf("El valor de b es %p\n",b);
	printf("El valor de lo que hay en lo que apunta b es %d\n",*b);
}


