#include <stdio.h>
 
int factorial(int n);
 
int main(){
    int num;
    printf("\n Ingresa un numero: ");
    scanf("%d",&num);
     
    /* en este caso se llama a la función y se imprime directamente*/
    printf("%d \n", factorial(num));
 
    return 0;
}
int factorial(int num){
    if (num == 0) /* caso base */
        return 1; /* como 0! = 1, se retorna 1*/
    else
        return num * factorial (num - 1); /* llamada a esta misma función */
}