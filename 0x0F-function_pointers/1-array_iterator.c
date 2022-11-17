#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: pointer to an int
 * @size: size of array
 * @action: pointer function
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action) (int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
