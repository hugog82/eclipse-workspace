/*
 ============================================================================
 Name        : caracteres.c
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

	char caracter;
	int acumuladorLetrasP;
	int i;

	acumuladorLetrasP = 0;


	for (i=0; i<10; i++){

	printf("Ingrese un caracter \n");
	scanf("%c", &caracter);
	fflush(stdin);

		switch(caracter){
			case 'p':
				acumuladorLetrasP++;
				break;
		}


	}

	printf("La cantidad de letras 'p' ingresadas fueron: %d", acumuladorLetrasP);


	return EXIT_SUCCESS;
}
