/**
 * @description: Algoritmo de ordenamiento de 'selección'
 * @nota: No utilizar, es de complejidad n²
 */

#include <stdio.h>
#define SIZE 5

int main (void)
{
	int array[SIZE] = {10, 43, 9, 7, 34};
	int position;
	int iter;
	int inner;
	int swap;
	int temp;

	puts("Antes de ordenar");

	for(iter = 0; iter < SIZE; iter++)
		printf("%d ", array[iter]);

	putchar('\n');


	// Itera a travez de todo el arreglo
	for (iter = 0; iter < SIZE; iter++) {
		// Almacena la posición actual
		position = iter;

		// Itera sobre el resto del arreglo,
		// sin tomar en cuenta la posición actual
		for (inner = iter + 1; inner < SIZE; inner++) {
			// Si el valor en la posición actual es mayor
			// que algun otro valor posterior se cambia
			// de posición
			if (array[position] > array[inner])
				position = inner;
		}

		// Si la posición es diferente de la posición
		// actual se intercambian valores
		if (position != iter) {
			swap = array[iter];
			array[iter] = array[position];
			array[position] = swap;
		}
	}

	puts("Despues de ordenar");

	for(iter = 0; iter < SIZE; iter++)
		printf("%d ", array[iter]);

	putchar('\n');

	return 0;
}
