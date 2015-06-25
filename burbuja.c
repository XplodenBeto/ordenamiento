/**
 * @description: Algoritmo de ordenamiento 'burbuja'
 * @nota: No utilizar, es de complejidad n²
 */

#include <stdio.h>
#define SIZE 5

int main(void)
{
	int array[SIZE] = {10, 43, 9, 7, 34};
	int iter;
	int inner;
	int swap;

	puts("Antes de ordenar");

	for(iter = 0; iter < SIZE; iter++)
		printf("%d ", array[iter]);

	putchar('\n');

	// Itera a travez de todo el arreglo
	for(iter = 0; iter < SIZE; iter++) {
		// Compara cada elemento con el resto
		for(inner = 0; inner < (SIZE - iter); inner++) {
		    // Si el valor actual es mayor
			// a la siguiente posición los intercambia
			if (array[inner] > array[inner + 1]) {
				swap = array[inner];
				array[inner] = array[inner+1];
				array[inner+1] = swap;
			}
		}
	}

	puts("Despues de ordenar");

	for(iter = 0; iter < SIZE; iter++)
		printf("%d ", array[iter]);

	putchar('\n');

	return 0;
}
