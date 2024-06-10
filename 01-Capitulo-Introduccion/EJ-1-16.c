/*
 * Ejercicio 1-16. Corrija la rutina principal del programa de la línea más
 * larga de modo que imprima correctamente la longitud de línea de entrada
 * arbitrariamente largas, y tanto texto como sea posible.
 */

#include <stdio.h>

#define MAXLINE 1000 /* tamaño máximo de la línea de entrada */
#define MINARBITRARY 10 /* tamaño arbitrario minimo para imprimir una línea */

/* declaración de las funciones */
int get_line(char [], int maxline);
void copy(char to[], char from []);

/* función principal del programa */
int main() {
	int len; /* longitud actual de la línea */
	int max; /* máxima longitud vista hasta el momento */
	char line[MAXLINE]; /* línea de entrada actual */
	char longest[MAXLINE]; /* la linea más larga se guarda aquí */

	max = 0;

	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;

			copy(longest, line);
			
			if (max > MINARBITRARY) /* si la línea es mayor que el tamaño arbitrario */
				printf("longitud: %d,\ntexto: %s", max, line);
		}

	putchar('\n');

	if (max > 0) /* hubo una línea */
		printf("La línea mas larga es:\n%s", longest);

	return 0;
}

/* definición de funciones */
/* get_line: lee una línea en s, regresa su longitud */
int get_line(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}

/* copy: copia 'from' en 'to'; supone que to es suficientemente grade */
void copy(char to[], char from[]) {
	int i;

	i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}

