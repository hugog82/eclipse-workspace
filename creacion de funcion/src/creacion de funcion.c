/*
 ============================================================================
 Name        : ejercicio.c
 Author      : HugoGe
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h> SOLO PARA LINUX

int sumarDosEnteros(int numeroUno, int numeroDos);
int	dividirDosEnteros(int primerNumero, int segundoNumero, int * resultadoDivision);


int main(void) {
	setbuf(stdout, NULL);

	char operador;
	int numeroUno;
	int numeroDos;
	int resultado;
	int resultadoDivision;

	printf("Ingrese el numero: ");
	scanf("%d", &numeroUno);
	//__fpurge(stdin); SOLO PARA LINUX
	fflush(stdin);
	printf("Ingrese el operador (+ , - , /): ");
	scanf("%c", &operador);
	printf("\nIngrese el numero: ");
	scanf("%d", &numeroDos);

	switch(operador){
		case '+':
			resultado = sumarDosEnteros(numeroUno, numeroDos);
			break;
		case '-':
			resultado = numeroUno - numeroDos;
			break;
		case '/':
			resultado = dividirDosEnteros(numeroUno, numeroDos, &resultadoDivision);
			if (resultado == -1){
			printf("\nNo puede dividir por 0\n");
			}
			if (resultado == -2){
			printf("\nNo puede ser mayor a 100 el primer numero\n");
			}
			printf("\nEl resultado es: %d\n", resultadoDivision);
			break;
	}

	printf("El resultado es: %d", resultado);

	return 0;
}

int	sumarDosEnteros(int primerNumero, int segundoNumero) {
	int suma;

	suma = primerNumero + segundoNumero;

	return suma;
}

int	dividirDosEnteros(int primerNumero, int segundoNumero, int * resultadoDivision) {
	int retorno = 0;

	if (primerNumero > 100){
		retorno = -2;
	}

	if(segundoNumero != 0){

		*(resultadoDivision) = primerNumero / segundoNumero;

	}else{
		retorno = -1;
	}

	return retorno;
}
