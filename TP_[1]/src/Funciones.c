#include "Funciones.h"
#include <stdio.h>
#include <stdlib.h>

float kilometrosIngresados(int kms)
{
	printf("Ingrese los kilometros:");
	scanf("%d", &kms);

	return kms;
}

float ingresarPrecioDeAerolineas(int aerolineas)
{
	printf("Ingrese el precio de Aerolineas");
	scanf("%d", &aerolineas);

	return aerolineas;
}

float ingresarPrecioDeLatam(int latam)
{
	printf("Ingrese el precio de Latam");
	scanf("%d", &latam);

	return latam;
}


