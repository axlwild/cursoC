#include"stdio.h"
#include <stdlib.h>

int f(int x);

int main(){
	printf("%d\n", f(20));
	return 0;
}

int f(int x){
	return x*x + 1 ;
}

