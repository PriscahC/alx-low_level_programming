#include "main.h"
/**
 * swap_int - swap value of two ints.
 * @a: pointer to one int.
 * @b: pointer to second int.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	
	temp = *a;
	*a = *b;
	*b = temp;	/*temp holds value of a temporarily before we pass to b*/
}
