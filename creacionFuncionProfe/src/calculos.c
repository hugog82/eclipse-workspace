#include <stdio.h>
#include "validaciones.h"

int sumarDosEnteros(int primerNumero, int segundoNumero) {
	int suma;

	suma = primerNumero + segundoNumero;

	return suma;
}

int dividirDosEnteros(int numeroUno, int numeroDos, int * resultado) {
	int retorno = 0;

		if(resultado != NULL){

			if (numeroUno > 100) {
				retorno = -2;
			}

		if(validarNumeroMayorACero(numeroDos) == 0) {

			*resultado = numeroUno / numeroDos;
			//operador de indireccion
		} else {
			retorno = -1;
		}

	}

	return retorno;
}


