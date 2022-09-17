/*
 ============================================================================
 Name        : perdirCincoNumeros.c
 Author      : HugoGe
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	int arrayNumeros[6];
	int i;
	char buffer;
	int numero;

	for (i=0; i<5; i++){

			arrayNumeros[i] = 0;

		}


	for (i=0; i<5; i++){

		printf("Ingrese un numero:\n");
		fgets(buffer, sizeof(buffer), stdin);
		buffer[strlen(buffer) - 1] = '\0';
		numero = atoi(buffer);
		arrayNumeros[i] = numero;

	}



	return EXIT_SUCCESS;
}
