/*
 ============================================================================
 Name        : numeroDelMedio.c
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
	int numeroTres;
	int numeroDelMedio;


	printf("Ingrese primer numero \n");
	scanf("%d", &numeroUno);
	printf("Ingrese segundo numero \n");
	scanf("%d", &numeroDos);
	printf("Ingrese tercer numero \n");
	scanf("%d", &numeroTres);

	if((numeroUno > numeroDos && numeroUno < numeroTres)
		||(numeroUno > numeroTres && numeroUno < numeroDos)){
		numeroDelMedio = numeroUno;
		printf("El numero del medio es: %d", numeroDelMedio);

		}else if((numeroDos > numeroUno && numeroDos < numeroTres)
		||(numeroDos > numeroTres && numeroDos < numeroUno)){
			numeroDelMedio = numeroDos;
			printf("El numero del medio es: %d", numeroDelMedio);

		}else if((numeroTres > numeroUno && numeroTres < numeroDos)
		||(numeroTres > numeroDos && numeroTres < numeroUno)){
			numeroDelMedio = numeroTres;
			printf("El numero del medio es: %d", numeroDelMedio);

		}else{
			printf("no hay numero del medio");
		}

	return EXIT_SUCCESS;
}
