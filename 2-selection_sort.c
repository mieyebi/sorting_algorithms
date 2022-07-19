#include "sort.h"

/**
 * swap_integers - Swaps integers
 * @x: first integer
 * @y: second integer
 * Return: void
 */
void swap_integers(int *x, int *y)
{
	int tmp = *x;

	*x = *y;
	*y = tmp;
}

/**
 * selection_sort - Sort an array using Selection Sort method
 * @array: The array to be sorted
 * @size: array size
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	size_t min = 0;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		if (i != min)
		{
			swap_integers(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
