/**
 * @description: Algoritmo de ordenamiento de 'selección'
 * @nota: No utilizar, es de complejidad n²
 */

#include <stdio.h>
#define SIZE 5

void selection_sort(int [], int);

int main (void)
{
	int array[SIZE] = {10, 43, 9, 7, 34};
	int iter;

	puts("Antes de ordenar");

	for(iter = 0; iter < SIZE; iter++)
		printf("%d ", array[iter]);

	putchar('\n');

	selection_sort(array, SIZE);

	puts("Despues de ordenar");

	for(iter = 0; iter < SIZE; iter++)
		printf("%d ", array[iter]);

	putchar('\n');

	return 0;
}

void selection_sort(int array[], int size)
{
	int position;
	int inner;
	int iter;
	int swap;
	int temp;

	// Itera a travez de todo el arreglo
	for (iter = 0; iter < size; iter++) {
		// Almacena la posición actual
		position = iter;

		// Itera sobre el resto del arreglo,
		// sin tomar en cuenta la posición actual
		for (inner = iter + 1; inner < size; inner++) {
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
}