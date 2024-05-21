#include <stdio.h>

/* Imprime la tabla Fahrenheit-Celsius */

int main() {
	int fahr;

	printf("%4s\t%7s\n", "Fahr", "Celsius");

	for(fahr = 0; fahr <= 300; fahr = fahr + 20)
		printf("%4d\t%7.1f\n", fahr, (5.0/9.0) * (fahr - 32));

	return 0;
}


