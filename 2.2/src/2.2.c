/*
 ============================================================================
 Name        : 2.2.c
 Author      : HugoGe
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int acumuladorPares = 0;
	int acumuladorImpares = 0;
	int numeroMenor;
	int parMayor;
	int sumaPositivos = 0;
	int productoNegativos = 0;
	int flag = TRUE;
	int i;


	for (i=0; i<6;i++){

		printf("Ingrese 10 numeros enteros, distintos de 0 \n");
		scanf("%d", &numero);

		if(numero %2 == 0){
			acumuladorPares++;
		}
		else{
			acumuladorImpares++;
		}
		if(flag == TRUE){
			flag = FALSE;
			parMayor = numero;
			numeroMenor = numero;
		}
			else if(numero %2 == 0 && numero > parMayor){
				parMayor = numero;
		}
			else if(numero < numeroMenor){
				numeroMenor = numero;
			}
		if(numero > 0){
			sumaPositivos += numero;
		}
		else if(numero < 0)
		{
			productoNegativos = productoNegativos * numero;
		}

	}

	printf("La catidad de pares son: %d y de impares son: %d \n", acumuladorPares, acumuladorImpares);
	printf("El numero menor es: %d\n", numeroMenor);
	printf("El numero par mayor es: %d\n", parMayor);
	printf("La suma de los positivos es: %d\n", sumaPositivos);
	printf("El producto de los negativos es: %d\n", productoNegativos);


	return EXIT_SUCCESS;
}
