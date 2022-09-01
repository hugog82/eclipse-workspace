/*
 ============================================================================
 Name        : suma.c
 Author      : HG
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Ingrese numero uno \n");
	scanf("%d", &numeroUno);
	printf("Ingrese numero dos \n");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	printf("La suma de este numero: %d y este numero %d es: %d",
			numeroUno, numeroDos, resultado);

	return EXIT_SUCCESS;
}
