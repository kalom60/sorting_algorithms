#include "sort.h"

/**
 * quick_sort - function that sorts an array
 * of integers using the quick sort algorithm
 *
 * @array: input arrray
 * @s: s of the array
 * Return: no return
 */
void quick_sort(int *array, size_t s)
{
	_quicksort(array, 0, s - 1, s);
}

/**
 * _quicksort - auxiliar function for the
 * quick_sort function
 * @a: input arrray
 * @l: index for the first element
 * @h: index for the last element
 * @s: s of the array
 * Return: no return
 */
void _quicksort(int *a, int l, int h, int s)
{
	int p, w, i;
	int tmp;

	if (l < h)
	{
		p = h;
		w = l;
		for (i = l; i < h; i++)
		{
			if (a[i] < a[p])
			{
				if (i != w)
				{
					tmp = a[i];
					a[i] = a[w];
					a[w] = tmp;
					print_array(a, s);
				}
				w++;
			}
		}
		if (w != p && a[w] != a[p])
		{
			tmp = a[w];
			a[w] = a[p];
			a[p] = tmp;
			print_array(a, s);
		}
		_quicksort(a, l, w - 1, s);
		_quicksort(a, w + 1, h, s);
	}
}

