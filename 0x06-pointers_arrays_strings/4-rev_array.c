#include "main.h"

/**
 *reverse_array- reversing the sequence  of arrays
 *@a: array to be reversed
 *@n: number of elements in the array
 */

void reverse_array(int *a, int n)
{

	int low, high, temp;

	high = n - 1;

	for (low = 0, low < n / 2; low++)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
	}


}
