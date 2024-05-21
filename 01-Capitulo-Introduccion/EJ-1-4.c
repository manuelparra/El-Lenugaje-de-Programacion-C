/*
 * Ejercicio 1-4. Escriba un programa que imprima la tabla correspondiente
 * Celsius a Fahrenheit
 */

#include <stdio.h>

int main() {
	float celsius, fahr;
	float lower, upper, step;

	lower = 0; // límite inferior de la tabla de temperaturas
	upper = 300; // límite superior
	step = 20; // tamaño del incremento

	celsius = lower;

	printf("%7s\t%12s\n", "Celsius", "Fahrenheit");

	while (celsius <= upper) {
		fahr = (9.0/5.0 * celsius) + 32.0;
		printf("%7.0f\t%12.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}

