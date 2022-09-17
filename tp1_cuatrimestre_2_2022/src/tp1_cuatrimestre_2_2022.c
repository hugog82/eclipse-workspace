/*
 ============================================================================
 Name        : tp1_cuatrimestre_2_2022.c
 Author      : Hugo Gimenez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"

int main(void)
{
	setbuf(stdout, NULL);

//area declaracion de variables---

	int opcionesCostos;
	int opcionesJugadores;
	int costoHospedaje;
	int costoComida;
	int costoTransporte;
	int i;
	int costoTotalHospedaje;
	int costoTotalComida;
	int costoTotalTransporte;
	int banderaCostos;
	int banderaJugadores;
	int cantidadArqueros;
	int cantidadDefensores;
	int cantidadMediocampistas;
	int cantidadDelanteros;


//area inicializacion de variables---

	opcionesCostos = 0;
	//opcionesJugadores = 0;
	costoHospedaje = 0;
	costoComida = 0;
	costoTransporte = 0;
	cantidadArqueros = 0;
	cantidadDefensores = 0;
	cantidadMediocampistas = 0;
	cantidadDelanteros = 0;
	costoTotalHospedaje = 0;
	costoTotalComida = 0;
	costoTotalTransporte = 0;
	banderaCostos = 0;
	banderaJugadores = 0;

//area ingreso de datos---

		system("cls");
		printf("			MENU PRINCIPAL\n\n");
		printf("\n1. Ingreso de los costos de mantenimiento:\n\n");
		printf("Costo de hospedaje.\n");
		printf("Costo de comida.\n");
		printf("Costo de transporte.\n");
		printf("Elija un numero para inciar la carga: \n\n");
		scanf("%d", &opcionesCostos);

		if(banderaCostos==0 && (opcionesCostos >0 && opcionesCostos <4)){

		banderaCostos = 1;
		switch(opcionesCostos){
			case 1:
				system("cls");
				printf("Ingrese el costo de hospedaje: \n");
				scanf("%d", &costoHospedaje);
			case 2:
				system("cls");
				printf("Ingrese el costo de comida: \n");
				scanf("%d", &costoComida);
			case 3:
				system("cls");
				printf("Ingrese el costo de transporte: \n");
				scanf("%d", &costoTransporte);
				break;
			}

		}//if

		printf("El costo del hospedaje es: $%d\n", costoHospedaje);
		printf("El costo de la comida es: $%d\n", costoComida);
		printf("El costo del transporte es: $%d\n", costoTransporte);


		for(i=0; i<4; i++){

		printf("\nIngreso de jugadores:\n\n");
				printf("1. Arqueros: \n");
				printf("2. Defensores: \n");
				printf("3. Mediocampistas: \n");
				printf("4. Delanteros: \n");
				printf("Elija un numero para inciar la carga: \n\n");
				scanf("%d", &opcionesJugadores);

		if(opcionesJugadores >0 && opcionesJugadores <5){

		switch(opcionesJugadores){
			case 1:
				system("cls");
				printf("Ingrese el numero de camiseta del arquero: \n");
				scanf("%d", &cantidadArqueros);
				cantidadArqueros++;
				break;
			case 2:
				system("cls");
				printf("Ingrese el numero de camiseta del defensor: \n");
				scanf("%d", &cantidadDefensores);
				cantidadDefensores++;
				break;
			case 3:
				system("cls");
				printf("Ingrese el numero de camiseta del mediocampista: \n");
				scanf("%d", &cantidadMediocampistas);
				cantidadMediocampistas++;
				break;
			case 4:
				system("cls");
				printf("Ingrese el numero de camiseta del delantero: \n");
				scanf("%d", &cantidadDelanteros);
				cantidadDelanteros++;
				break;
			}
		}

		}

		printf("Cantidad de arqueros: %d\n", cantidadArqueros);
		printf("Cantidad de defensores: %d\n", cantidadDefensores);
		printf("Cantidad de mediocampitas: %d\n", cantidadMediocampistas);
		printf("Cantidad de delanteros: %d\n", cantidadDelanteros);


//area proceso de datos---




//area informe de resultados---





	return EXIT_SUCCESS;
}
