#include "sort.h"

/**
 * swap_two_ints - Swap two  given integers
 * @a: First integer
 * @b: Second integer
 */

void swap_two_ints(int *x,int *y)
{
	int tmp;
	tmp = *x; 
	*x = *y;
	*y = tmp;
}
