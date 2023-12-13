#include "search_algos.h"

/**
  * linear_search - function that searches for a value in an array of
  * integers using linear search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: -1.
  * else, first index where the value is located.
  *
  */
int linear_search(int *array, size_t size, int value)
{
	size_t num;

	if (array == NULL)
		return (-1);

	for (num = 0; num < size; num++)
	{
		printf("Value checked array[%ld] = [%d]\n", num, array[num]);
		if (array[num] == value)
			return (num);
	}

	return (-1);
}
