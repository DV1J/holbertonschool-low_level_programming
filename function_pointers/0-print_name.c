#include "function_pointers.h"

/**
 *print_name - a function that prints a name
 *@name: contains the name for the string for name
 *@f: pointer f
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
