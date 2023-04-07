#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: is the unsigned long int
 * @index: index
 *
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	unsigned long int mask = 1UL << index;

	return ((n & mask) != 0);
}
