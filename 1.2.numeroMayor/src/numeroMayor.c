/*
 ============================================================================
 Name        : numeroMayor.c
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
		int numeroMayor;

		printf("Ingrese primer numero \n");
		scanf("%d", &numeroUno);
		printf("Ingrese segundo numero \n");
		scanf("%d", &numeroDos);
		printf("Ingrese tercer numero \n");
		scanf("%d", &numeroTres);


		if(numeroUno > numeroDos && numeroUno > numeroTres){
				numeroMayor = numeroUno;
		}
		else if(numeroDos > numeroTres){
			numeroMayor = numeroDos;
		}
		else{
			numeroMayor = numeroTres;
		}

		printf("El numero Mayor es: %d", numeroMayor);


	return EXIT_SUCCESS;
}
