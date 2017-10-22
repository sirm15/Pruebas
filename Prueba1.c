#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int num1, num2, suma, resta, producto, resto;
	float division;

	printf("Numero 1\n");
	scanf("%d", &num1);
	printf("Numero 2\n");
	scanf("%d", &num2);
	suma = num1 + num2;
	resta = num1 - num2;
	producto = num1 * num2;
	division = num1 / num2;
	resto = num1 % num2;
	printf("La suma es: %d\n", suma);
	printf("La resta es: %d\n", resta);
	printf("El producto es: %d\n", producto);
	printf("La division es: %f\n", division);
	printf("El resto es: %d\n", resto);
	system("pause");
	return 0;
}