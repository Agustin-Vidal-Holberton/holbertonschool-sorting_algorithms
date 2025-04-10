#include "sort.h"

/**
 * selection_sort - Ordena un arreglo de enteros en orden ascendente
 * utilizando el algoritmo de seleccion.
 * @array: Apuntador al arreglo de enteros
 * @size: Tama√o del arregl
 * Return: Nada
 */
void selection_sort(int *array, size_t size);
{
	size_t i, j, min_idx;
	int temp;

	if (!array || size < 2)
		return (0);

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
	}
}
