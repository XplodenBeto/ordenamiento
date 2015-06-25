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

	for (iter = 1; iter <= SIZE; iter++) {
		temp = iter;

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
