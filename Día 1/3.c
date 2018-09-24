/*
Programa que calcula el area de un triangulo y un rentangulo
y suma las areas de ambos
*/
#include<stdio.h>
int main()
{
float baseT, alturaT, areaT; // triangulo
float baseR, alturaR, areaR; // triangulo

printf("\nVamos a calcular area del triangulo");
printf("\n Dame la base del triangulo: ");
scanf("%f",&baseT);
printf("\n Dame la altura del triangulo: ");
scanf("%f",&alturaT);
areaT=baseT*alturaT/2;
printf("\n El area del triangulo es: %.1f",areaT);
printf("\n");

printf("\n Vamos a calcular el area del rectangulo");
printf("\n Dame la base del rectangulo: ");
scanf("%f",&baseR);
printf("\n Dame la altura del rectangulo: ");
scanf("%f",&alturaR);
areaR=baseR*alturaR;
printf("\n El area del rectangulo es: %f",areaR);
printf("\n");

printf("\n La suma de las areas es: %f \n",areaT+areaR);
return 0;
}