#include <stdio.h>

int mayor(int a, int b , int c){
	int maximo=a;
	if(b>maximo)
		maximo=b;
	if(c>maximo)
		maximo=c;
	return maximo;	
}

int main(){
    int a,b,c;
 	printf("Ingresa tres numeros: \n");
 	scanf("%d %d %d", &a,&b,&c);
 	printf("El numero mayo es: %d\n",mayor(a,b,c));
    return 0;
}
 
