/*
 ============================================================================
 Name        : promedio.c
 Author      : HugoGe
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	float acumulador;
	int repeticiones;
	float promedio;
	int i;

	repeticiones = 5;
	acumulador = 0;

	for(i=0; i < repeticiones; i++){

		printf("Ingrese un numero \n");
		scanf("%d", &numero);
		acumulador +=numero;
	}


	promedio = acumulador / repeticiones;

	printf("El promedio es: %.2f", promedio);

	return EXIT_SUCCESS;
}
