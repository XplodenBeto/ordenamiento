/**
 * @description: Algoritmo de ordenamiento de 'inserción'
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
	int temp;

	puts("Antes de ordenar");

	for(iter = 0; iter < SIZE; iter++)
		printf("%d ", array[iter]);

	putchar('\n');

	// Itera a travez de todo el arreglo
	for (iter = 1; iter <= SIZE; iter++) {
		// Guarda la posición actual en iter
		temp = iter;

		// Mientras la posición actual sea mayor que cero
		// y el valor de esa posición sea menor que el
		// valor en la posición anterior intercambiará
		// los elementos.
		while (temp > 0 && array[temp] < array[temp-1]) {
			swap = array[temp];
			array[temp] = array[temp-1];
			array[temp-1] = swap;

			temp--;
		}
	}

	puts("Despues de ordenar");

	for(iter = 0; iter < SIZE; iter++)
		printf("%d ", array[iter]);

	putchar('\n');

	return 0;
}
