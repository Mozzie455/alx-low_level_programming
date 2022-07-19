#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: pointer to array
 * @size: size of the array
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp = 0;

	while (1)
	{
		i = 0;
		while (i < size -1 && array [i] < array [i+1])
			i++;

		if (i == size -1)
			break;

		while (i < size - 1)
		{
			if (array[1] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array [i+1];
				array [i+1] = tmp;
				print_array(array,size);
			}
			i++;
		}
	}			
}
