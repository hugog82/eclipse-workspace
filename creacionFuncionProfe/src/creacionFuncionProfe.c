#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"


int sumarDosEnteros(int primerNumero, int segundoNumero);
int dividirDosEnteros(int primerNumero, int segundoNumero, int * resultadoDivision);

int main(void) {

	char operador;
	int numeroUno;
	int numeroDos;
	int resultado;
	int resultadoDivision = 3456;
	int retornoScanf;

	printf("\nNumero uno en main: %p\n", &numeroUno);

	printf("Ingrese el numero: ");
	retornoScanf = scanf("%d", &numeroUno);
	while (retornoScanf != 1) {
		printf("Le pifiaste al tipo\n");
		setbuf(stdout, NULL);
		printf("Ingrese el numero: ");
		retornoScanf = scanf("%d", &numeroUno);
	}
	setbuf(stdout, NULL);
	printf("Ingrese el operador (+/-): ");
	retornoScanf = scanf("%c", &operador);

	printf("\nIngrese el numero: ");
	scanf("%d", &numeroDos);

	switch (operador) {
	case '+':
		resultado = sumarDosEnteros(numeroUno, numeroDos);
		break;
	case '-':
		resultado = numeroUno - numeroDos;
		break;
	case '/':
		printf("\nAntes de la funcion: %d", resultadoDivision);
		printf("\nPuntero en main de resultadoDivision: %p", &resultadoDivision);
		resultado = dividirDosEnteros(numeroUno, numeroDos, &resultadoDivision);
		if (resultado == -1) {
			printf("\nNo puede dividir por 0");
		}
		if (resultado == -2) {
			printf("\nNo puede ser mayor a 100 el primer numero");
		}
		printf("\nDespues de la funcion: %d", resultadoDivision);

		break;
	}

	//printf("El resultado es: %d", resultado);

	return 0;
}
