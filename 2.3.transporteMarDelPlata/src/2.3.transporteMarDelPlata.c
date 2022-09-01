/*
 ============================================================================
 Name        : transporteMarDelPlata.c
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

	int numCliente;
	char estadoCivil;
	int edad;
	float temperatura;
	char genero;
	int precioPorPasajero;
	int contador;
	int acumuladorViudosMayor60;
	int numClienteMujerSolteraMasJoven;
	int edadMujerSolteraMasJoven;
	int precioTotalViajeSinDecuento;
	//int descuento;
	//int precioFinalConDescuento;
	int acumuladorEdadMayor60;

	precioPorPasajero = 600;
	contador = 0;
	//descuento = 25;
	acumuladorViudosMayor60 = 0;
	precioTotalViajeSinDecuento = 0;
	acumuladorEdadMayor60 = 0;

	do{
		printf("Ingrese el numero de cliente \n");
		scanf("%d", &numCliente);

		printf("Ingrese el estado civil, 's' para soltero, 'c' para casado, 'v' para viudo \n");
		fflush(stdin);
		scanf("%c", &estadoCivil);

		printf("Ingrese la edad, mayor a 17 anios \n");
		scanf("%d", &edad);

		printf("Ingrese la temperatura, mayor a 0 \n");
			while(temperatura < 0){
				printf("Reingrese la temperatura, mayor a 0 \n");
		}
		scanf("%f", &temperatura);

		printf("Ingrese el genero, 'f' para femenino, 'm' para masculino, 'o' para no binario \n");
		fflush(stdin);
		scanf("%c", &genero);

		if(edad > 60 && estadoCivil == 'v'){
			acumuladorViudosMayor60++;
		}
		if(contador == 0 && genero == 'm' && estadoCivil == 's'){
			edadMujerSolteraMasJoven = edad;
			numClienteMujerSolteraMasJoven = numCliente;
		}
		else if(edad < edadMujerSolteraMasJoven){
			edadMujerSolteraMasJoven = edad;
			numClienteMujerSolteraMasJoven = numCliente;
		}
		if(edad > 60){
			acumuladorEdadMayor60++;
		}

		precioTotalViajeSinDecuento = precioTotalViajeSinDecuento + precioPorPasajero;



		contador++;
	}while(contador < 3);

	/*a) La cantidad de personas con estado civil"viudo" de más de 60 años.
	b) el número de cliente y edad de la mujer soltera más joven.
	c) cuánto sale el viaje total sin descuento.
	d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que
	solo mostramos si corresponde.*/


	printf("La cantidad de personas con estado civil 'viudo' de más de 60 años es: %d \n", acumuladorViudosMayor60 );
	printf("La edad de la mujer soltera mas joven es: %d y el numero de cliente es: %d \n", edadMujerSolteraMasJoven, numClienteMujerSolteraMasJoven);
	printf("El viaje total sin descuento es: %d \n", precioTotalViajeSinDecuento);




	return EXIT_SUCCESS;
}
