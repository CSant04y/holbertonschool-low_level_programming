#include "function_pointers.h"
/**
 * array_iterator - this iterats throught an array
 * @array: this is the array they pass us
 * @size: the size of the array
 * @action: function taht does the action
 * Return:
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count  = 0;

	if (!array)
		return;
	if (!action)
		return;
	while (count < size)
	{
		action(array[count]);
		count++;
	}
}
