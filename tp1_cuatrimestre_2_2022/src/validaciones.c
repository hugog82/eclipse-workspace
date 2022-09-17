//valida un numero entero positivo, retorna -1 como error y 0 como correcto.
int validarEnteroPositivo(int numeroEntero) {

	int retorno;
	retorno = -1;

	if (numeroEntero > 0) {

		retorno = 0;
	}
	return retorno;
}

//valida un numero entero positivo, retorna -1 como error y 0 como correcto.
int validarFlotantePositivo(float numeroFlotante) {

	int retorno;
	retorno = -1;

	if (numeroFlotante > 0) {

		retorno = 0;
	}
	return retorno;
}
