#include "main.h"

/**
 *reverse_array- reversing the sequence  of arrays
 *@a: array to be reversed
 *@n: number of elements in the array
 */

void reverse_array(int *a, int n)
{

	int low, high, temp;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
	}


}
