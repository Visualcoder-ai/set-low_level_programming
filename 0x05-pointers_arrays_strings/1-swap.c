#include "main.h"
/**
 *1-swap.c - It is used  to swap between two integers given
 *
 * a and b are the integers to be swapped
 */
void swap_int(int *a, int *b)
{
	int swap;
	swap = *a;
	*a = *b;
	*b = swap;
	
}
