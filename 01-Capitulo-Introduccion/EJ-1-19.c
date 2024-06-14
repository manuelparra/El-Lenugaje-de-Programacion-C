/*
 * Ejercicio 1-19. Escriba una función reverse(s) que invierta la cadena de
 * caracteres s. Usela para escribir un programa que invierta su entrada, linea
 * a línea.
 */

#include <stdio.h>

#define MAXLINE 1000 /* tamaño maximo de la línea */

/* declaración de la función: get_new_line */
int get_new_line(char line[], int maxline);
/* declaración de la función: reverse */
void reverse(char line[], char line_reverse[], int lim);

/* definición de la función principal del sistema */
int main() {
	int len; /* longitud de la línea actual */
	char line[MAXLINE], line_reverse[MAXLINE]; /* línea de entrada actual y linea de entrada actual invertida */

	while ((len = get_new_line(line, MAXLINE)) > 0) {
		reverse(line, line_reverse, len);
		printf("%s", line_reverse);
	}

	return 0;
}

/* definición de la función get_new_line: lee una línea en s, regresa su longitud */
int get_new_line(char s[], int lim) {
	int i, c;

	for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;

	if (c == '\n') {
		s[i] = c;
		++i;
	}

	s[i] = '\0';

	return i;
}

/* definición de la función inverse: recibe una linea s y la invierte en r */

void reverse(char s[], char r[], int lim) {
	int i, j;
	for (i = (lim - 1), j = 0; i >= 0; --i) {
		if (s[i] != '\n') {
			r[j] = s[i];
			++j;
		}
	}

	r[j] = '\n';
	++j;
	r[j] = '\0';
}

