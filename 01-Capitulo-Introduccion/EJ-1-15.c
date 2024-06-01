/*
 * Ejercicio 1-15. Escriba de nuevo el programa de conversión de temperaturas
 * de la sección 1.2, de modd que use una función para la conversión.
 */

/* imprime la tabla Fahrenheit-Celsius para fahr = 0, 20, ..., 300 */

#include <stdio.h>

#define LOWER 0 /* límite inferior de la tabla de conversión */
#define UPPER 300 /* límite superior */
#define STEP 20 /* tamaño del incremento */

void fahrToCelsius(float a, float b, float c);

int main() {
	fahrToCelsius(LOWER, UPPER, STEP);
	return 0;
}

void fahrToCelsius(float lower, float upper, float step) {

	float fahr, celsius;
	fahr = lower;

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return;
}

