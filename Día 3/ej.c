//Programa que impmie 10 numeros de forema descendente: DO-WHILE 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int contador=10;
	do{
		printf("%d\n",contador);
		contador--;
	}
	while(contador>=0);
	return 0;

}

/*

//Programa que impmie 10 numeros de forema descendente: WHILE 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int contador=10;
	while(contador>=0){
		printf("%d\n",contador);
		contador--;
	}

	return 0;
}


Programa que impmie 10 numeros de forema descendente: FOR
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int contador = 0;
	for(contador=10; contador >= 0; contador--){
		printf("%d\n",contador);
	}
	return 0;
}

*/