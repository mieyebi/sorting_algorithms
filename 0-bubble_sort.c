 #include "sort.h"

/**
* bubble_sort - sorts the algorithm using a bubble format
* array: a list of random elements
* size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
	size_t a = 0;
	size_t b = 0;
	size_t tmp;
	int flag = 0;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < (size - 1); b++)
		{
			if (array[b] > array[b + 1])
			{
				flag = 1;
				tmp = array[b];
				array[b] = array[b + 1];
				array[b + 1] = tmp;
				print_array(array, size);
				flag++;
			}
		}
	}
}
