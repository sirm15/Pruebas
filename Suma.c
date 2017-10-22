#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main()
{
	float num1, num2, suma, producto;
	printf("Introduce un numero\n");
	scanf("%f", &num1);
	printf("Introduce otro numero\n");
	scanf("%f", &num2);
	suma = num1 + num2;
	producto = num1 * num2;
	printf("La suma vale: %f\n", suma);
	printf("El producto vale: %f\n", producto);
	system("pause");
	return(0);
}