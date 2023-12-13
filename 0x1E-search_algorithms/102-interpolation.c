#include "search_algos.h"

/**
  * interpolation_search - function that searches for a value in a sorted
  * array of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return:-1.
  *	else, the first index where the value is located.
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t t, x, y;

	if (array == NULL)
		return (-1);

	for (x = 0, y = size - 1; y >= x;)
	{
		t = x + (((double)(y - x) / (array[y] - array[x])) * (value - array[x]));
		if (t < size)
			printf("Value checked array[%ld] = [%d]\n", t, array[t]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", t);
			break;
		}

		if (array[t] == value)
			return (t);
		if (array[t] > value)
			y = t - 1;
		else
			x = t + 1;
	}

	return (-1);
}
