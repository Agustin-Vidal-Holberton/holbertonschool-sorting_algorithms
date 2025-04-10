#include <stddef.h>
#include "sort.h"

/**
 * swap - Intercambia dos elemeentos en un array
 * @a: puntero al primer elemento
 * @b: puntero al segundo elemento
 * Return: nada
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - particiona el array usando el esquema de lomuto
 * @array: array de enteros
 * @low: indice inicial
 * @high: indice final
 * @size: tama√o del array(para imprimir)±
 * Return: indice del pivote despues de la particion
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j && array[i] != array[j])
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			else if (i != j)
			{
				swap(&array[i], &array[j]);
			}
			i++;
		}
	}
	if (i != high && array[i] != array[high])
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	else if (i != high)
	{
		swap(&array[i], &array[high]);
	}
	return (i);
}

/**
 * quick_sort_recursive - Funcion recursiva que aplica quick sort
 * @array: array de enteros
 * @low: indice inicial
 * @high: indice final
 * @size: Tama√o del arrelo
 * Return: Nada
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * quick_sort - Ordena un array de enteros con quick sort(lomuto)
 * @array: array de enteros
 * @size: tama√o del array
 * Return: nada
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);
}
