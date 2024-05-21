/*
 * Ejercicio 1-3. Modifique el pgograma de cnoversión de temperaturas de modo
 * que escriba un encabezado sobre la tabla.
 */

#include <stdio.h>

/* imprime la tabla Fahrenheit-Celsius para fahr = 0, 20, ..., 300 */

int main() {
	float fahr, celsius;
	float lower, upper, step;

	lower = 0; /* límite inferior de la tabla de temperaturas */
	upper = 300; /*límite superior */
	step = 20; /* tamaño del incremento */

	fahr = lower;

	printf("%12s\t%7s\n", "Fahrenheit", "Celsius");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%12f\t%7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	return 0;
}

