/*
 ============================================================================
 Trabajo Práctico N°1

 Autor: Alizon Gamboa

 Enunciado:
	 Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
	 para ofrecerlos a sus clientes.
	 Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
	 El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.


 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#include "Funciones.c"

int main(void)
{
	setbuf(stdout, NULL);

	int menuDeOpciones;// necesitamos una estructura de repeticion y una de seleccion multiple(switch)
	int kilometros;
	int precioAerolineas;
	int precioLatam;

	kilometros = 0;
	precioAerolineas = 0;
	precioLatam = 0;


	do
	{
		printf("1. Ingresar los kilometros ( km=x)\n");
		printf("2. Ingresar el precio de Aerolineas\n");
		printf("3. Ingresar el precio de Latam\n");
		/*printf("4. Informar Resultados\n");
		printf("5. Carga forzada de datos\n");*/
		printf("6. Salir\n");

		printf("Ingrese una opcion: ");
		scanf("%d", &menuDeOpciones);

		switch(menuDeOpciones)//int - char
		{
			case 1:
				system("cls");
				kilometros = kilometrosIngresados();
				break;

			case 2:
				system("cls");
				precioAerolineas = ingresarPrecioDeAerolineas();
				break;

			case 3:
				system("cls");
				precioLatam = ingresarPrecioDeLatam();
				break;
/*
			case 4:
				printf("Calcular los costos: \n");
				break;

			case 5:
				printf("Ingresar el numero de kilometros: \n");
				break;

			case 6:
				printf("Gracias por confiar en esta agencia de viajes.\n");
				break;
*/
		}

	}while(menuDeOpciones != 6);

	return EXIT_SUCCESS;
}
