#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Ordena un arreglo de enteros en orden ascendente
 * usando el algoritmo Bubble sort
 * @array: Arreglo de enteros
 * @size: Tamaño del arreglo
 */
void bubble_sort(int *array, size_t size)
{

	size_t i, j;
	int temp;
	int inter;

	if (!array || size < 2)
		return ;

	for (j = 0; i < size - 1; i++)
	{
		inter = 0;

		for (j = 0; size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp= array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				print_array(array, size);
				inter = 1;
			}
		}

		if (inter == 0)
			break;
	}
}
