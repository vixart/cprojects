#include "stdio.h"

int bsearch(int *array, int count, int number, int *check)
{
	int i;
	for(i = 0; i < count; i++)
	{
		if (array[i] > number)
		{
			*check = 1;
			break;
		}
	}
	return i;
}

int main()
{	
	int array[10] = {3,4,5,5,6,7,8,9,10,10};
	int result, number = 10, check = 0;

	result = bsearch(array, sizeof(array)/4, number, &check);
	
	if(check)
		printf("Index: %d", result);
	else
		printf("The array does not have the number, more than %d", number);
	
	return 0;
}