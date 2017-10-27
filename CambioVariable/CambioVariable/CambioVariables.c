#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x=0, y=0, z=0;
	printf("Introduzca variable x: \n");
	scanf("%d", &x);
	printf("Introduzca variable y: \n");
	scanf("%d", &y);
	z = x;
	x = y;
	y = z;
	printf("x es igual a %d, e y es igual a %d. \n", x, y);
	system("pause");
	return 0;
}