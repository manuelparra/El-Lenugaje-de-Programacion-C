#include <stdio.h>

#define MAXLINE 1000 /* máximo tamaño de una línea de entrada */

int max; /* máxima longitud vista hasta el momento */
char line[MAXLINE]; /* línea de entrada actual */
char longest[MAXLINE]; /* la línea más larga se guarda aquí */

/* declaracíon de funciones get_new_line y copy */
int get_new_line(void);
void copy(void);

/* imprime la línea de entrada más larga; versión especializada */
int main () {
	int len;
	extern int max;
	extern char longest[];

	max = 0;

	while ((len = get_new_line()) > 0)
		if (len > max) {
			max = len;
			copy();
		}

	if (max > 0) /* hubo una línea */
		printf("%s", longest);

	return 0;
}

/* definición de get_new_line: versión especializada */
int get_new_line(void) {
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;

	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}

/* definición de copy: versión especializada */
void copy(void) {
	int i;

	extern char line[], longest[];

	i = 0;

	while ((longest[i] = line[i]) != '\0')
		++i;
}

