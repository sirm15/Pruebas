#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>

int menu();
int cambio();
int cambio2();

int main()
{
	int opcion,x=0,y=0,z=0;
	opcion = menu();
	//while (opcion <= 5 || opcion >= 1);
	while (opcion != 5)
	{
		switch (opcion)
		{
		case 1:
			printf("Ejercicio 1.\n\n Introduce un numero: ");
			scanf("%d",&x);
			z = x;
			printf("Introduce un segundo numero: ");
			scanf("%d", &y);
			x = cambio(x, y);
			y = cambio2(z, y);
			printf("x es %d e y es %d\n", x, y);
			break;
		case 2:
			printf("Ejercicio 2.\n");
			break;
		case 3:
			printf("Ejercicio 3.\n");
			break;
		case 4:
			printf("Ejercicio 4.\n");
			break;

		default:
			printf("Opcion incorrecta.\n");
			break;
		}
		system("pause");
		opcion = menu();
	}
}

int menu() 
{
	int op;
	do 
	{
		system("cls");
		printf("Opcion 1 \n Opcion 2 \n Opcion 3 \n Opcion 4 \n Salir\n");
		scanf("%d", &op);
		if (op < 1 || op > 5)
		{
			printf("Opci%cn no v%clida\n", 0xA2, 0xA0);
			system("pause");
		}
	} 
	while (op < 1 || op > 5);
		return op;
}

int cambio(int i, int j) {
	int k=0;
	k = i;
	i = j;
	j = k;
	return i;
}

int cambio2(int m, int n) {
	int o = 0;
	o = m;
	m = n;
	n = o;
	return n;
}