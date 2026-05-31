#include "3-calc.h"

/**
 *op_add - adds two integers
 *op_sub - subtracts two integers
 *op_mul - multiplies two integers
 *op_div - divides two integers
 *op_mod - finds remainder of division
 *@a: first integer
 *@b: second integer
 *
 *Return: sum || difference || product || quotient || remainder
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	return (a / b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
