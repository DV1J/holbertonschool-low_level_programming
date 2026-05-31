#include "function_pointers.h"
/** 
 *array_iterator -  executes function parameter on each element of an array
 *@size: check the size
 *@action: pointer to the function
 *@array: check the array
 *Return: array[i]
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
	return;
	}
	if (action == NULL)
	{
	return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
