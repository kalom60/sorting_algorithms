#include "sort.h"

/**
 * bubble_sort - function that sorts an array
 * of integers using the
 * Bubble sort algorithm
 *
 * @array: input arrray
 * @size: size of the array
 * Return: no return
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int s, t;

	for (n = size, s = 1; n > 0 && s; n--)
	{
		s = 0;
		for (i = 0; (i + 1) < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				t = array[i + 1];
				array[i + 1] = array[i];
				array[i] = t;
				print_array(array, size);
				s = 1;
			}
		}
	}
}

