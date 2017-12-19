#include <stdio.h>
#include "structBonos.h"
#include "funcsNominaPollosI.h"

int main(int argc, char const *argv[]){

	int i = 0; // Variable para ciclos

// Datos de Entrada

	double porcentMortalidad; // porcentaje de mortalidad
	double pesoPromedio; // peso promedio en gramos
	double edadPromedio; // edad promedio en dias (edad a la que salió el pollo)
	double kilosDeCarne; // kilos de carne de pollo entregado en kilos
	double conversion; // kilos totales de alimento/kilos totales de carne de pollo

// Datos Calculados

	double gananciaDiaria;
	double bonoIndiceDeProductividad;
	double bonoGramosFaltantesSobrantes;

// DATOS DE LA ESTRUCTURA BONOS

/* En este arreglo se van a almacenar todos los datos de la tabla que contiene Indice de Conversión, Bono x Kg
   Ganancia Diaria y Peso */

	bonos tablaBonos[46];

	bonos bonoObtenido; // Aqui se va a almacenar el bono obtenido con respecto a mi conversion

/* Se llama a la funcion que se encarga de vaciar todos los datos en el arreglo de estructuras */

	llenaTablaBonos(tablaBonos);

// Para imprimir el contenido de la tabla bonos

/*
	for (int i = 0; i < 46; i++) {

		printf("\nIndice de Conversion: %f\nBono x Kg: %f\nGanancia Diaria: %f\nPeso: %f\n\n",
		tablaBonos[i].indiceDeConversion,tablaBonos[i].bonoXKg,tablaBonos[i].gananciaDiaria,tablaBonos[i].peso);

	}
*/

/* RECOLECCION DE DATOS DE ENTRADA */

	printf("\nPARAMETROS OBTENIDOS EN LA PARVADA\n\n");

	printf("\to Porcentaje de Mortalidad: ");
	scanf("%lf",&porcentMortalidad);

	printf("\to Peso Promedio [gramos]: ");
	scanf("%lf",&pesoPromedio);

	printf("\to Edad Promedio/Venta [dias]: ");
	scanf("%lf",&edadPromedio);

	printf("\to Kilos de Carne [Kg]: ");
	scanf("%lf",&kilosDeCarne);

	printf("\to Conversion: ");
	scanf("%lf",&conversion);

// CALCULOS

	gananciaDiaria = pesoPromedio/edadPromedio;

	bonoIndiceDeProductividad = 0.01*puntosIndiceDeProductividad(indiceDeProductividad(porcentMortalidad,gananciaDiaria,conversion));

	bonoGramosFaltantesSobrantes = 0.05*gramosSobantesFaltantes(gananciaDiaria);

// OBTENCION DEL BONO OBTENIDO

	for (i = 0; i < 46; i++) {
		if (tablaBonos[i].indiceDeConversion == conversion){
			bonoObtenido = tablaBonos[i];
			break;
		}
	}

// IMPRESION DEL BONO OBTENIDO

	printf("\nPARAMETROS POR TABLA");
	printf("\n\n\t> Indice de Conversion: %.3f\n\t> Bono x Kg: %.3f\n\t> Ganancia Diaria: %.2f\n\t> Peso: %.0f",
		bonoObtenido.indiceDeConversion,bonoObtenido.bonoXKg,bonoObtenido.gananciaDiaria,bonoObtenido.peso);

// IMPRESION DE INDICE DE PRODUCTIVIDAD Y PUNTOS A FAVOR/EN CONTRA

	printf("\n\nINDICE DE PRODUCTIVIDAD Y PUNTOS A FAVOR/EN CONTRA");
	printf("\n\n\t* Indice de Productividad: %f\n\t* Puntos A Favor/En Contra: %.2f",
		indiceDeProductividad(porcentMortalidad,gananciaDiaria,conversion),
		puntosIndiceDeProductividad(indiceDeProductividad(porcentMortalidad,gananciaDiaria,conversion)));

// IMPRESION DE GANANCIA DIARIA Y GRAMOS FALTANTES/SOBRANTES

	printf("\n\nGANANCIA DIARIA Y GRAMOS FALTANTES/SOBRANTES");
	printf("\n\n\t* Ganancia Diaria: %f\n\t* Gramos Faltantes/Sobrantes: %f",
		gananciaDiaria,gramosSobantesFaltantes(gananciaDiaria));


// IMPRESION DE BONOS

	printf("\n\nBONOS [$ x Kg]");
	printf("\n\n\t- Bono por Tabla: $ %.3f\n\t- Bono por Indice de Productividad: $ %f\n\t- Bono por Gramos Faltantes/Sobrantes: $ %f",
		bonoObtenido.bonoXKg,bonoIndiceDeProductividad,bonoGramosFaltantesSobrantes);


// PAGO DE LA PARVADA

	printf("\n\nPAGO DE LA PARVADA");
	printf("\n\n\tPago por Bono x Kg\n\t\tKilos de Pollo * Bono x Kg = %.2f * %.3f = %.2f",
		kilosDeCarne,bonoObtenido.bonoXKg,kilosDeCarne*bonoObtenido.bonoXKg);
	printf("\n\tPago por Bono de Indice de Productividad\n\t\tKilos de Pollo * Bono por Indice de Productividad = %.2f * %f = %f",
		kilosDeCarne,bonoIndiceDeProductividad,kilosDeCarne*bonoIndiceDeProductividad);
	printf("\n\tPago por Bono de Gramos Faltantes/Sobrantes\n\t\tKilos de Pollo * Bono por Gramos Faltantes/Sobrantes = %.2f * %f = %f",
		kilosDeCarne,bonoGramosFaltantesSobrantes,kilosDeCarne*bonoGramosFaltantesSobrantes);
	printf("\n\nPago Total = %.2f\n",kilosDeCarne*(bonoObtenido.bonoXKg + bonoIndiceDeProductividad + bonoGramosFaltantesSobrantes));

	getchar();
	getchar();

	return 0;
}

